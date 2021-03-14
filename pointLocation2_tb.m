%% Testbench for pointLocation2
% Ryan Fang, 1483818
% 2021-03-05
clear; close all;


%% Main testbench

% Load the DT
DTelpse = load('DT.mat');
DT452Mesh1 = load('452Mesh1.mat');
DT452Mesh2 = load('452Mesh2.mat');

DTelpse_obj = load('DTobj.mat');

selection = 1;
switch selection
    case 1
        DT.P = DTelpse.DT.Points;
        DT.T = DTelpse.DT.ConnectivityList;
    case 2
        DT.P = DT452Mesh1.P1;
        DT.T = DT452Mesh1.T1;
    case 3
        DT.P = DT452Mesh2.P2;
        DT.T = DT452Mesh2.T2;
end

% View it
f1 = figure(1);
t1 = triplot(DT.T,DT.P(:,1),DT.P(:,2),'k');
f1.Position = [1,1,1500,890];
hold on

%define qp
qp = [440,488];        %known to be not on a vertex
plot(qp(1),qp(2),'r*');

tri_v2 = pointLocation2(DT.T,DT.P,qp);
[tri_v3,bc3] = pointLocation3(DT.T,DT.P,qp);
if tri_v2 > 0
    %if the triangle is found, plots the 3 verticies
    vert1 = DT.P(DT.T(tri_v2,1),:);
    vert2 = DT.P(DT.T(tri_v2,2),:);
    vert3 = DT.P(DT.T(tri_v2,3),:);
    plot(vert1(1),vert1(2),'bo',vert2(1),vert2(2),'bo',vert3(1),vert3(2),'bo');
elseif tri_v2 == 0
    fprintf('QP out of bounds.\n');
elseif tri_v2 == -1
    fprintf('Enclosing simplex not found.\n');
end

%% Test the speed
%first define the boundaries
bound.x1 = min(DT.P(:,1));
bound.x2 = max(DT.P(:,1));
bound.y1 = min(DT.P(:,2));
bound.y2 = max(DT.P(:,2));
% generate random x and y points
num_points = 5000;
report_times = 10;
qp = zeros(num_points,2);
tic
for i = 1:num_points
    qpx = bound.x1 + (bound.x2-bound.x1)*rand(1);
    qpy = bound.y1 + (bound.y2-bound.y1)*rand(1);
    qp(i,:) = [qpx,qpy];
    if (mod(i,int32(num_points/report_times)) == 0)
        time_qp = toc;
        fprintf('Generation of %i random points took %.2f seconds.\n',i,time_qp);
    end
end
time_qp = toc;
fprintf('Generation of random points took %.2f seconds.\n\n',time_qp);

%% pointLocation2 uncompiled

tri1 = zeros(num_points,1);
tic
for i = 1:num_points
    tri1(i) = pointLocation2(DT.T,DT.P,qp(i,:));
    if (mod(i,int32(num_points/report_times)) == 0)
        time1 = toc;
        fprintf('Uncompiled of %i points took %.2f seconds.\n',i,time1);
    end
end
time1 = toc;
fprintf('Uncompiled took %.2f seconds.\n\n',time1);


%% pointLocation2 compiled
tri2 = zeros(num_points,1);
tic
for i = 1:num_points
    tri2(i) = pointLocation2_mex(DT.T,DT.P,qp(i,:));
    if (mod(i,int32(num_points/report_times)) == 0)
        time2 = toc;
        fprintf('Compiled of %i points took %.2f seconds.\n',i,time2);
    end
end
time2 = toc;
fprintf('Compiled took %.2f seconds.\n\n',time2);

%% pointLocation built in
tri3 = zeros(num_points,1);
tic
for i = 1:num_points
    tri3(i) = pointLocation(DTelpse_obj.DTobj,qp(i,:));
    if (mod(i,int32(num_points/report_times)) == 0)
        time3 = toc;
        fprintf('Built In of %i points took %.2f seconds.\n',i,time3);
    end
end
time3 = toc;
fprintf('Built In took %.2f seconds.\n\n',time3);

%% pointLocation4 compiled
tri4 = zeros(num_points,1);
tic
for i = 1:num_points
    tri4(i) = pointLocation4_mex(DT.T,DT.P,qp(i,:));
    if (mod(i,int32(num_points/report_times)) == 0)
        time4 = toc;
        fprintf('Compiled of %i points took %.2f seconds.\n',i,time4);
    end
end
time4 = toc;
fprintf('Compiled v4 took %.2f seconds.\n\n',time4);




