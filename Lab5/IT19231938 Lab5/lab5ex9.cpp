//IT19231938
//K A K Kavinda
//WD_2021Jan/ Pro-rata

//This program to print carater using nested loop
#include <iostream>
using namespace std;
int main()
{
    for(int a=0; a < 4;a++){
        for(int b=0; b <= a;b++){
            cout<<"*";
        }
        cout<<endl;
    }
    int n = 3,s = 0;
    //prrint carater using nested while loop
    cout<<endl;
    cout<<endl;
    while (n >= 0)
    {
        s = 0;
        while (s < n)
        {
            cout<<"*";
            s++;
        }
        n--;
        cout<<endl;
        /* code */
    }
    cout<<endl;
    cout<<endl;
    //prrint carater using nested Do while
    int d = 0;
    do
    {
        int f=0;
        d++;
        do
        {
            f++;
           cout<<f;
        } while (f < d);
        cout<<endl;
    } while (d <3);
    
    
    return 0;
}