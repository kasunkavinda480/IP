//WD_2021Jan prorata
//IT19231938
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double  a;
    double  b;
    double  t;
    cout << "Getting triangle A value :";
    cin >> a;
    cout << endl;
     
    cout << "Getting triangle B value :";
    cin >> b;
    cout << endl;

    cout << "Getting triangle angle value :";
    cin >> t;
    cout << endl;
    double  sum  = (pow(a,2)+pow(b,2) -(2*a*b*(cos(t))));
    double  c = sqrt(sum);

    cout << "C value is : " << c << endl; 
    return 0;
}