//IT19231938
//K A Kasun Kavinda
#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int c)
{
    int s;
    s = (c - 32) * 5 / 9;
    return s;
}
int fahrenheit(int f)
{
    int a;
    a = (f * 9 / 5) + 32;
    return a;
}
int main()
{
    int f = 32, c = 0;
    for(int i = 1; i<=100;i++){
        c= i;
        f++;
        cout << left << setw(15) << celsius(c) << setw(15) << fahrenheit(f) << endl;
    }
    
    return 0;
}