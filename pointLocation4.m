function [tri,bc] = pointLocation3(T,P,qp)

%% pointLocation2
%{
Ryan Fang, 1483818
2021-03-05

Given a query point in a delaunay triangulation, its returns the enclosing triangle
if it is out of bounds, return a zero

qp is a 1x2 row vector defining the query point

pointlocation2 is the "2nd" (really first) version created
pointlocation3 adds barycentric coordinate
pointlocation4 adds check if triangle is close to qp

TODO:
    check if point is on a point or line (not within simplex)
    run in less time

%}

%% Psuedocode
%{
determine if the point is out of bounds
    if so, tri=0, then return zero

loop through each triangle

    check if point point 3 and qp are on the same side as point 1 or 2
        if not, continue
    do again for point 1/qp vs point 2 and 3
        if not, continue
    do again for point 2/qp vs point 3 and 1
        if yes, return the tri number
        if not, continue
end
return -1 since can't find it

%}

%% Algorithm
qpx = qp(1,1);
qpy = qp(1,2);

bound.x1 = min(P(:,1));
bound.x2 = max(P(:,1));
bound.y1 = min(P(:,2));
bound.y2 = max(P(:,2));

if (qpx < bound.x1) || (qpx > bound.x2) || (qpy < bound.y1) || (qpy > bound.y2)
    tri = 0; bc = [0,0,0];
    return;
end

for i = 1:length(T)
    % Get the global node numbers of the current triangle
    n1 = T(i,1);
    n2 = T(i,2);
    n3 = T(i,3);
    % Get the coordinates of each of these points
    p1x = P(n1,1); p1y = P(n1,2);
    %Check if qp is too far from p1x and p1y
    if (p1x-qpx)>50 || (p1y-qpy)>50
        continue
    end
    
    p2x = P(n2,1); p2y = P(n2,2);
    p3x = P(n3,1); p3y = P(n3,2);
    
    % Check point 1 and 2 (1 as reference)
    r12 = [p2x-p1x, p2y-p1y];        %vector from p1 to p2
    r1qp = [qpx-p1x, qpy-p1y];       %vector from p1 to qp
    r13 = [p3x-p1x, p3y-p1y];        %vector from p1 to p3
    signP3 = r13(1)*r12(2) - r13(2)*r12(1);     %just the z component of the cross prod
    signQp12 = r1qp(1)*r12(2) - r1qp(2)*r12(1);
        %check if they are not both same sign
        if (signP3>0)~=(signQp12>0)
            continue;
        end
    
    % Check point 2 and 3 (2 as reference)
    r23 = [p3x-p2x, p3y-p2y];        %vector from p2 to p3
    r2qp = [qpx-p2x, qpy-p2y];       %vector from p2 to qp
    r21 = [p1x-p2x, p1y-p2y];        %vector from p2 to p1
    signP1 = r21(1)*r23(2) - r21(2)*r23(1);     %just the z component of the cross prod
    signQp23 = r2qp(1)*r23(2) - r2qp(2)*r23(1);
        %check if they are not both same sign
        if (signP1>0)~=(signQp23>0)
            continue;
        end
    
    % Check point 3 and 1 (3 as reference)
    r31 = [p1x-p3x, p1y-p3y];        %vector from p3 to p1
    r3qp = [qpx-p3x, qpy-p3y];       %vector from p3 to qp
    r32 = [p2x-p3x, p2y-p3y];        %vector from p3 to p2
    signP2 = r32(1)*r31(2) - r32(2)*r31(1);     %just the z component of the cross prod
    signQp31 = r3qp(1)*r31(2) - r3qp(2)*r31(1);
        %check if they are not both same sign
        if (signP2>0)~=(signQp31>0)
            continue;
        end
    
    %Now that we have confirmed that for all three segments of the triangle,
    %the qp and other vertex are on the same side, we can say the triangle is
    %the current one
    tri = i;
    twoarea = det([1,p1x,p1y; 1,p2x,p2y; 1,p3x,p3y]);
    bc = 1/twoarea*[det([1,qpx,qpy; 1,p2x,p2y; 1,p3x,p3y]), det([1,qpx,qpy; 1,p3x,p3y; 1,p1x,p1y]), det([1,qpx,qpy; 1,p1x,p1y; 1,p2x,p2y])];
    return;

end
% if not found, set tri to -1
tri = -1; bc = [0,0,0];

end