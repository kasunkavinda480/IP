
#include <iostream>
using namespace std;
int main()
{
    //Intialize variables
    double Celsius, Fahrenheit;
    cout << "Enter Fahrenheit: ";
    cin >> Fahrenheit;
    cout << endl;
    //Fahrenheit = 212.0;

    //Convert Fahrenheit into Celsius
    Celsius = (Fahrenheit -32) * 5.0/9.0;

    //Print the values 
    cout<<Fahrenheit<<" degrees Fahrenheit is "<<Celsius;cout << " degrees Celsius.\n";
    
    return 0;
}