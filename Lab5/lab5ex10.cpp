//IT19231938
//K A K Kavinda
//WD_2021Jan/ Pro-rata

//This program to input a  list  of  positive  num 
//from the keyboard and find the average. The list is terminated with the value -99
#include <iostream>
using namespace std;
int main()
{
    int val = 0,sum=0,c=0;
    for (;;)
    {
        cout<< "Enter Number : " ;
        cin>>val;
        cout<<endl;
        
        if(val == -99){
            break;
        }
        sum +=val;
        c++;
    }
    cout<<"Sum is : "<<sum<<endl;
    cout<<"Average is : "<<sum/c<<endl;
    return 0;
}