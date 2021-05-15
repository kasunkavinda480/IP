//WD_2021Jan prorata
//IT19231938
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float r;
    cout << "Enter radius Value :" << endl;
    cin >> r;
    float sum = pow(r,2) * 3.14159;
    cout << "The area of a circle of radius"<< r << "units is" << sum << "units" << endl;
    return 0;
}