//IT19231938
//K A K Kavinda
//WD_2021Jan/ Pro-rata

//input 5 numbers from the keyboard and print the sum and the average to the screen using While Loop
#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int inp,sum =0;
    while (a < 5)
    {
        cout<< "Enter Number : ";
        cin >>inp;
        cout<< endl;
        sum +=inp;
        a +=1;
    }
    cout<< "Sum Is : "<< sum<<endl;
    cout<< "Average Is : " << sum/5 << endl;
    return 0;
}