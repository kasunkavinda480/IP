#include <iostream>
#include <iomanip>
using namespace std;

int MinimumOutlet(int value1, int value2)
{
    if (value2 < value1)
    {
        return value2;
    }
    else
    {
        return value1;
    }
}
int MaximumOutlet(int value1, int value2)
{
    if (value2 > value1)
    {
        return value2;
    }
    else
    {
        return value1;
    }
}
int TotalValue(int value1, int value2)
{
    return value2 + value1;
}
float AverageValues(int value1, int value2)
{
    return ((value2 + value1) / 2);
}

void PrintReport(int array1[], int array2[], int s)
{
    int *minval = new int[s];
    int *maxval = new int[s];
    int *totval = new int[s];
    float *avgval = new float[s];
    int day = 1;
    for (int a = 0; a < s; a++)
    {
        minval[a] = MinimumOutlet(array1[a], array2[a]);
        maxval[a] = MaximumOutlet(array1[a], array2[a]);
        totval[a] = TotalValue(array1[a], array2[a]);
        avgval[a] = AverageValues(array1[a], array2[a]);
    }
    cout << "Day" << setw(15) << "Quantity 1" << setw(15) << "Quantity 2" << setw(15) << "Minimum" << setw(15) << "Maximum" << setw(15) << "Total"
         << "Average" << endl;
    for (int a = 0; a < s; a++)
    {
        cout << day << setw(15) << array1[a] << setw(15) << array1[a] << setw(15) << minval[a] << setw(15) << maxval[a] << setw(15) << totval[a] << avgval[a] << endl;
        day++;
    }
}
//this code for the input transcations
void InputTransactions(int arr[], int size)
{
    int input;
    for (int a = 0; a < size; a++)
    {
        cout << "Enter Code : ";
        cin >> input;
        cout << endl;
        if (input / 1000 >= 1 && input / 1000 <= 9)
        {
            arr[a] = input;
        }
        else
        {
            cout << "You Enterd Code is Incorrect Please ReEnter The code" << endl;
            a--;
        }
    }
}
void ProcessTransactions(int arr1[], int arr2[], int size)
{
    for (int a = 0; a < size; a++)
    {
        arr2[a] = arr1[a] % 100;
    }
}

void TotalProduction(int arr1[], int arr2[], int arr3[], int arr4[], float arr5[], int size)
{
   int tot = 0;
   for (int a = 0; a < size; a++){
       tot = TotalValue(arr1[a],arr2[a]);
       arr5[a] = tot + TotalValue(arr3[a],arr4[a]);
   }
}
int main()
{
    int size = 4;
    int *transactions = new int[size];
    int *outlet1product = new int[size];
    int *outlet2product = new int[size];
    int *outlet3product = new int[size];
    int *outlet4product = new int[size];
    int *totalproduction = new int[size];
    float *sales = new float[size];

    cout << "Input Outlet 1 Data:" << endl;
    InputTransactions(transactions, size);
    ProcessTransactions(transactions, outlet1product, size);
    cout << "Input Outlet 2 Data:" << endl;
    InputTransactions(transactions, size);
    ProcessTransactions(transactions, outlet2product, size);

    cout << "Input Outlet 3 Data:" << endl;
    InputTransactions(transactions, size);
    ProcessTransactions(transactions, outlet3product, size);
    cout << "Input Outlet 4 Data:" << endl;
    InputTransactions(transactions, size);
    ProcessTransactions(transactions, outlet4product, size);
    
    int Day = 1;
    TotalProduction(outlet1product, outlet2product, outlet3product, outlet4product,sales,size);
    for (int a = 0; a < size; a++)
    {   
        cout <<"Total Product of Day "<<Day<<" : " <<sales[a]<< endl;
        Day++;
    }
    

    //this is for the print Summery
    //this for the print report
    PrintReport(outlet3product, outlet4product, size);
}
