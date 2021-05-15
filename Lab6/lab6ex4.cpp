//IT19231938
//K A Kasun Kavinda
#include <iostream>
using namespace std;

float circleArea(float radius)
{
    float s;
    s = 3.14 * 2 * radius;
    return s;
}
float rectangleArea(float length, float width)
{
    float a;
    a = (length * 2) + (width * 2);
 return a;
}
int main()
{
    int l = 3,w = 5,r =7;
    cout <<rectangleArea(l,w)<<endl;
    cout<<circleArea(r)<<endl;
    return 0;
}