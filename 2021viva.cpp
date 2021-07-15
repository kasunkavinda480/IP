#include <iostream>
#include <iomanip>
using namespace std;
int OutletMin(int value1, int value2)
{
    if (value1 < value2)
    {
        return value1;
    }
    else
    {
        return value2;
    }
}
int OutletMax(int value1, int value2)
{
    if (value1 > value2)
    {
        return value1;
    }
    else
    {
        return value2;
    }
}
int getTotal(int value1, int value2)
{
    return value2 + value1;
}

int getaAverage(int value1, int value2)
{
    return (value2 + value1) / 2;
}

void PrintReport(int arr1[], int arr2[], int s)
{
    string day[] = {"Monday", "Tuesday", "Wednesday", "Thursday"};
    int total, avg;
    string status;
    cout << "Day" << setw(20) << "Outlet 1" << setw(20) << "Outlet 2" << setw(20) << "Total Production" << setw(20) << "Average Production" << setw(20) << "Status" << endl;
    for (int i = 0; i < s; i++)
    {
        total = getTotal(arr1[i], arr2[i]);
        avg = getaAverage(arr1[i], arr2[i]);
        if (total >= 0 && total <= 59)
        {
            status = "Low";
        }
        else if (total >= 60 && total <= 109)
        {
            status = "Mid";
        }
        else if (total >= 110)
        {
            status = "Top";
        }
        cout << day[i] <<"\t" << setw(20) << arr1[i] << setw(20) << arr2[i] << setw(20) << total << setw(20) << avg << setw(20) << status << endl;
    }
}
float findmeanValue(int value1, int value2)
{
    return (value2 + value1) / 2;
}
void mMeadQuantity(int arr1[], int arr2[], int arr3[], int s)
{
    for (int i = 0; i < s; i++)
    {
        arr3[i] = findmeanValue(arr1[i], arr2[i]);
    }
}

void processTransaction(int arr1[], int arr2[], int s)
{
    for (int i = 0; i < s; i++)
    {
        arr2[i] = arr1[i] % 100;
    }
}
void storeRecords(int arr1[], int arr2[], int arr3[], int s)
{
    int input,val;
    for (int i = 0; i < s; i++)
    {
        cout << "Enter Transaction Code:";
        cin >> input;
        cout << endl;
        if ((input / 1000 >= 1) && (input / 1000 <= 2))
        { //check digit
            val =input / 100 % 10;
            if (val >= 1 && val <= 4)
            {
                arr1[i] = input;
            }
            else
            {
                cout << "incorrect day"<<endl;
                i--;
            }
        }
        else
        {
            cout << "incorrect outlet"<< endl;
            i--;
        }
    }
    for (int i = 0; i < s; i++) //8
    {
        int val = arr1[i] / 100 % 10;
        if (arr1[i] / 1000 == 1) //outlet 1
        {
            arr2[val - 1] = arr1[i] % 100;
        }
        else if (arr1[i] / 1000 == 2) //outlet 2
        {
            arr3[val - 1] = arr1[i] % 100;
        }
    }
}

void InputTransactions(int arr[], int size)
{
    int input, val;
    for (int a = 0; a < size; a++)
    {
        cout << "Enter Code : ";
        cin >> input;
        cout << endl;
        val = input / 100;
        val %= 10;
        if (input / 1000 == 1 || input / 1000 == 2)
        {

            if (val == 1 || val == 2 || val == 3 || val == 4)
            {
                arr[a] = input;
            }
            else
            {
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
void calculateTax(int arr1[], int arr2[], int s)
{
    int total, out1, out2;
    float tax;
    cout << "Array" << setw(20) << "Outlet 1" << setw(20) << "Outlet 2" << setw(20) << "Total" << setw(20) << "Tax Payble"<< endl;
    for (int i = 0; i < s; i++)
    {
        out1 = arr1[i] * 4200;
        out2 = arr2[i] * 5500;
        total = getTotal(out1, out2);
        if (total >= 0 && total <= 99999)
        {
            tax = 0;
        }
        else if (total >= 100000 && total <= 299999)
        {
            tax = total / 100 * 0.25;
        }
        else
        {
            tax = total / 100 * 0.50;
        }
        cout << i <<"\t"<< setw(20) << arr1[i] << setw(20) << arr2[i] << setw(20) << total << setw(20) << tax << endl;
    }
}
int main()
{
    int s = 8;
    int k = 4;
    int *tranaction= new int[s];
    int *outlet1= new int[k];
    int *outlet2= new int[k];
    storeRecords(tranaction,outlet1,outlet2,s);
    PrintReport(outlet1,outlet2,4);
    return 0;
}
