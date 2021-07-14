#include <iostream>
#include <iomanip>
using namespace std;

void InputTransactions(int arr[], int size)
{
    int input,val;
    for (int a = 0; a < size; a++)
    {
        cout << "Enter Code : ";
        cin >> input;
        cout << endl;
        val = input/100;
        val %=10;
        if (input / 1000 == 1 || input / 1000 == 2)
        {
            
            if(val == 1 || val == 2 || val == 3 || val == 4){
                arr[a] = input;
            }else{
               cout << "You Enterd Date is Incorrect Please ReEnter The code" << endl;
            a--;     
            }
            
        }
        else
        {
            cout << "You Enterd Code is Incorrect Please ReEnter The code" << endl;
            a--;
        }
    }
}
float findMean(int value1, int value2)
{
    return ((value2 + value1) / 2);
}
int findSum(int value1, int value2)
{
    return value2 + value1;
}
int getMaximumOutlet(int value1, int value2)
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
void storeRecords(int arr1[], int arr2[], int arr3[], int size)
{
    int input;
    for (int a = 0; a < size; a++)
    {
        input = arr1[a];
        if (input / 1000 == 1)
        {
            arr2[a] = arr1[a] % 100;
        }
        else if (input / 1000 == 2)
        {
            arr3[a] = arr1[a] % 100;
        }
    }
}

int getMininimum(int value1, int value2)
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
void storeProduction(int arr1[], int arr2[], int arr3[], int size)
{
}
void AverageQuantity(int arr1[], int arr2[], float arr3[], int size)
{
}

void printTax(int arr1[], int arr2[], int size)
{
}

void calculateTax(int arr1[], int arr2[], int size){
    int tot;
    float txs;
    int tota1,tota2;
    for (int a = 0; a < size; a++){
        tota1 = arr1[a] * 4000;
        tota2 = arr2[a] * 5000;
        tot = findSum(tota1, tota2);
        if(tot >= 0 && tot <50000){
            txs = 0;
        }else if(tot >= 100000 && tot <300000){
            txs = tot/100 * 0.25;
        }else if(tot > 299999){
            txs = tot/100 * 0.50;
        }
    }
}

void PrintReport(int arr1[], int arr2[], int size)
{
    string arr1[4] = {"Monday", "Tuesday", "Wednesday", "Tuesday"};
    int *totval = new int[size];
    float *avgval = new float[size];
    string *status = new string[size];

    for (int a = 0; a < size; a++)
    {
        totval[a] = findSum(arr1[a], arr2[a]);
        avgval[a] = findMean(arr1[a], arr2[a]);
        if (totval[a] >= 0 && totval[a] <= 49)
        {
            status[a] = "Low";
        }
        else if (totval[a] >= 50 && totval[a] <= 99)
        {
            status[a] = "Mid";
        }
        else if (totval[a] >= 100)
        {
            status[a] = "Top";
        }
    }

    cout << "Day" << setw(15) << "Outlet 1" << setw(15) << "Outlet 2" << setw(15) << "Total Production" << setw(15) << "Average Production" << setw(15) << "Status" << endl;
    for (int a = 0; a < size; a++)
    {
        cout << arr1[a] << setw(15) << arr1[a] << setw(15) << arr2[a] << setw(15) << totval[a] << setw(15) << avgval[a] << setw(15) << status[a] << endl;
    }
}

//qus 5
void MeanProduction(int arr1[], int arr2[], float arr3[], int size)
{
    for (int a = 0; a < size; a++)
    {
        arr3[a] = findMean(arr1[a], arr2[a]);
    }
}

int main()
{
    int size = 4;
    int s = 8;
    int *transaction_weekly = new int[s];
    int *outlet1 = new int[size];
    int *outlet2 = new int[size];
    float *average_outputs = new float[size];

    InputTransactions(transaction_weekly, s);
    storeProduction(outlet1, outlet2, transaction_weekly, size);

    //this function to print average
    AverageQuantity(outlet1, outlet2, average_outputs, size);

    //this for the print tax
    printTax(outlet1, outlet2, size);

    //this for the print report
    PrintReport(outlet1, outlet2, size);
    return 0;
}