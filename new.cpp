#include <iostream>
using namespace std;

struct details
{
    string name;
    int id;
    int arr[5];
};

struct studentrecord
{
    string name;
    int id;
    int arr[5];
}exrecord;

typedef struct
{
    string name;
    int id;
    int arr[5];
}studentrecords;

void mainfun(){
    struct details d1;

    cout<<d1.name<<endl;
}

int main() {
    studentrecords def2;
    struct details det1;
    cin>>det1.name;
    mainfun();
    cout<<"hello";

}
//--------------------------------------------------------
#include <iostream>
using namespace std;

void InputArray(int arr1[], int row)
{
    cout << "Enter the numbers to fill the array :" << endl;
    for (int i=0; i<row; i++)
    {
            cin >> arr1[i];
    }
}

void PrintArray(int arr1[], int row)
{
    for (int i=0; i<row; i++)
    {
            cout << arr1[i] << " ";
    }
    cout << endl;
}

void getMinandMax(int arr1[],int size,int* min,int* max)
{
    for(int i=1; i<size; i++)
    {
        if(arr1[i]<*min)
        {
            *min=arr1[i];
        }
        if(arr1[i]>*max)
        {
            *max=arr1[i];
        }
    }
}

int main ()
{
    int arr1[5];
    InputArray(arr1,5);
    cout << "The array numbers are : " ;
    PrintArray(arr1,5);
    int min=arr1[0];
    int max; 
    getMinandMax(arr1,5,&min,&max);
    cout<<"Min is "<<min<<endl;
    cout<<"max is "<<max<<endl;
    
    return 0;
}
