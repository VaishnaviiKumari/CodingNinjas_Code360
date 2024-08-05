// Angle Between Hour Hand And Minute Hand

#include <bits/stdc++.h> 
int findAngle(int hour, int minute) {
    // Write your code here.

    // Calculate the position of the hr and min hands in degree
    float min_angle = minute*6;
    float hr_angle = (hour%12)*30 + minute*0.5;

    // Calculate the abs diff b/w the two angles
    float angle = abs(hr_angle - min_angle);

    // Find the min of the calculated angle and its supplementary angle
    angle = min(angle , 360-angle);

    return floor(angle);
}
