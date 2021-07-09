#include<iostream>
#include <cmath>
using namespace std;
/*
string isValid(int v){
    string t = "Invalid";
    v /= 100;
    if(v>= 5 && v <= 8){
        t = "Valid";
    }
    return t;
}

*/
//cout << left << setw(15) << celsius(c) << setw(15) << fahrenheit(f) << endl;
// std::cout << "Hello World!";
//char t[4][20]
int main() {
    int i,m,sum =0;
   cout<<"Enter Number";
   cin>>i;
   cout<<"\n";

    if(i/10000>0 && i/10000<=9){
        if(i%2 ==0){
            while (i>0)
            {
               m = i%10;
               sum +=m;
               i=i/10;
            }
            cout<< sum;
            
        }
        cout<<"valid number "<<i;
    }else{
        cout<<"Invalid number";
    }
    return 0;
}
/*
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
void printAll(char t[4][20])
{
    for (int i = 0; i < 4; i++)
    {
        for (int a = 0; a < 20; a++)
        {
            cout << t[i][a];
        }
        cout << endl;
    }
}
*/