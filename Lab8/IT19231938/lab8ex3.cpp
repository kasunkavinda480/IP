//IT19231938
//K A Kasun Kavinda
#include <iostream>
using namespace std;
void Multiply(int t[3][4],int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 4; a++)
        {
           t[i][a] *= n;
           cout<< t[i][a]<<"\t"; 
        }
        cout<<endl;
        
    }
}

int main()
{
    int arr[3][4] = {{10, 20, 30, 40},
                      {35, 45, 55, 65},
                      {90, 80, 70, 60}};
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Multiply(arr,num);
    return 0;
}