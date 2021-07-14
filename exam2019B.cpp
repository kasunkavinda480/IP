#include <iostream>
#include <iomanip>
using namespace std;

void InputMark(float arr[], int s)
{
    float a;
    for (int i = 0; i < s; i++)
    {
        cout << "Enter Mark : ";
        cin >> a;
        cout << endl;
        if (a >= 0 && a <= 100)
        {
            arr[i] = a;
        }
        else
        {
            cout << "You Enterd MArk Incorrect" << endl;
            i--;
        }
    }
}
float MinimumMark(float value1, float value2)
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
float MaximumMark(float value1, float value2)
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
float AverageMark(float value1, float value2)
{
    return (value2 + value1) / 2;
}
float TotalMark(float value1, float value2)
{
    return (value2 + value1);
}
void StoreData(float value1[], float value2[], float value3[], int s, char mode)
{
    switch (mode)
    {
    case 'G':
        for (int i = 0; i < s; i++)
        {
            value3[i] = MaximumMark(value1[i], value2[i]);
        }
        break;
    case 'L':
        for (int i = 0; i < s; i++)
        {
            value3[i] = MinimumMark(value1[i], value2[i]);
        }
        break;
    case 'T':
        for (int i = 0; i < s; i++)
        {
            value3[i] = TotalMark(value1[i], value2[i]);
        }
        break;
    case 'A':
        for (int i = 0; i < s; i++)
        {
            value3[i] = AverageMark(value1[i], value2[i]);
        }
        break;

    default:
        cout << "Error in given state";
        break;
    }
}
void PrintReport(float value1[], float value2[], int s)
{
    float *maxval = new float[s];
    float *minval = new float[s];
    float *total = new float[s];
    float *average = new float[s];
    char class_arr[] = {'A', 'B', 'C', 'D', 'E'};
    StoreData(value1, value2, maxval, s, 'G'); //maxval
    StoreData(value1, value2, minval, s, 'L'); //minval
    StoreData(value1, value2, total, s, 'T'); //Total
    StoreData(value1, value2, average, s, 'A'); //Avg
    cout << "Class" << setw(12) << "Subject P" << setw(12) << "Subject Q" << setw(12) << "Minimum" << setw(12) << "Maximum" << setw(12) << "Total" << setw(12) << "Average" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << class_arr[i] << setw(12) << value1[i] << setw(12) << value2[i] << setw(12) << minval[i] << setw(12) << maxval[i] << setw(12) << total[i] << setw(12) << average[i] << endl;
    }
}
struct variables
{
    string unit_name;
    float unit_total;
    float average;
};
int main()
{
    int size = 5;
    float subject_1[5], subject_2[5], result[5];
    cout << "Enter Subject P Marks : " << endl;
    InputMark(subject_1, 5);
    cout << "Enter Subject Q Marks : " << endl;
    InputMark(subject_2, 5);

    //this for the display higest mark
    StoreData(subject_1, subject_2, result, size, 'G');
    for (int i = 0; i < size; i++)
    {
        cout << "Max Value from the Subject P and Q : " << result[i] << endl;
    }
    cout << endl;

    StoreData(subject_1, subject_2, result, size, 'L');
    for (int i = 0; i < size; i++)
    {
        cout << "Lowest Value from the Subject P and Q : " << result[i] << endl;
    }
    cout << endl;

    StoreData(subject_1, subject_2, result, size, 'T');
    for (int i = 0; i < size; i++)
    {
        cout << "Total Value from the Subject P and Q : " << result[i] << endl;
    }
    cout << endl;

    StoreData(subject_1, subject_2, result, size, 'A');
    for (int i = 0; i < size; i++)
    {
        cout << "Average Value from the Subject P and Q : " << result[i] << endl;
    }
    cout << endl;

    //this part for the print report
    PrintReport(subject_1, subject_2, size);

    struct variables m1;
    struct variables m2;
    m1.unit_name = "Subject P";
    m2.unit_name = "Subject Q";
    //float sum =0,avgmark = 0;
    m1.unit_total = 0;
    for (int i = 0; i < size; i++)
    {
       m1.unit_total += subject_1[i];
       m2.unit_total += subject_2[i];

    }
     m1.average = m1.unit_total/size;
     m2.average = m2.unit_total/size;
    
    cout<<m1.unit_name<<endl;
    cout<<"Summery of the "<<m1.unit_name<<" : "<<m1.unit_total<<endl;
    cout<<"Aggregation marks"<<m1.unit_name<<" : "<<m1.average<<endl;

    cout<<m2.unit_name<<endl;
    cout<<"Summery of the "<<m2.unit_name<<" : "<<m2.unit_total<<endl;
    cout<<"Aggregation marks"<<m2.unit_name<<" : "<<m2.average<<endl;

    return 0;
}