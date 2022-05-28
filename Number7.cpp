#include <iostream>
using namespace std;
 
int findAngle(int hh, int mm)
{
    hh = hh % 12;
 
    int h = (hh * 360) / 12 + (mm * 360) / (12 * 60);
 
    int m = (mm * 360) / (60);
 
    int angle = abs(h - m);
 
    if (angle > 180) {
        angle = 360 - angle;
    }
 
    return angle;
}
 
int main()
{
    int hh = 5;
    int mm = 30;
 
    cout << findAngle(hh, mm);
 
    return 0;
}