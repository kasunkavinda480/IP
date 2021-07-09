/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

void InputValues(float marks[], int size)
{
    char class_array[] = {'E','D','C','B','A'};
    int x;
    for (int i=4; i>=0;)
    {
        cout << "Enter marks of class " << class_array[i] << endl;
        cin >> x;
        if((x>=10) && (x<=90))
        {
            marks[i]=x;
            i--;
        }
        else 
        {
            cout << "Invalid marks" << endl;
        }
    }
    cout << endl;
}

float MinimumValue(float value1, float value2)
{
    if (value1<value2)
    {
        return value1;
    }
    
    if (value1>value2)
    {
        return value2;
    }
}

float MaximumValue(float value1, float value2)
{
    if (value1>value2)
    {
        return value1;
    }
    
    if (value1<value2)
    {
        return value2;
    }
}

float AverageValue(float value1, float value2)
{
    float avg = (value1 + value2)/2.0;
    return avg;
}

float TotalValue(float value1, float value2)
{
    float total = value1 + value2;
    return total;
}

void StoreValues(float value1[], float value2[], float value3[], int size, int mode)
{
    char class_marks[]={'E','D','C','B','A'};
    if (mode == 4)
    {
        for (int i=4; i>=0; i--)
        {
            value3[i]= MinimumValue(value1[i], value2[i]);
            cout << "Lowest marks of class " << class_marks[i] << " subjectP and subjectQ :" << value3[i] << endl;
        }
    }
        
    if (mode == 3)
    {
        for (int i=4; i>=0; i--)
        {
            value3[i]= MaximumValue(value1[i], value2[i]);
            cout << "Highest marks of class " << class_marks[i] << " subjectP and subjectQ :" << value3[i] << endl;
        }
    }
        
    if (mode == 2)
    {
        for (int i=4; i>=0; i--)
        {
            value3[i]= TotalValue(value1[i], value2[i]);
            cout << "Total marks of class " << class_marks[i] << " :" << value3[i] << endl;
        }
    }
        
    if (mode == 1)
    {
        for (int i=4; i>=0; i--)
        {
            value3[i]= AverageValue(value1[i], value2[i]);
            cout << "Average marks of class " << class_marks[i] << " :" << value3[i] << endl;
        }
    }
}

void PrintSummary(float value1[], float value2[], int size)
{
    float* MinimumValue = new float[size];
    float MaximumValue[size];
    float TotalValue[size];
    float AverageValue[size];
    
    
    StoreValues(value1, value2, MinimumValue, size, 4);
    cout << endl;
    StoreValues(value1, value2, MaximumValue, size, 3);
    cout << endl;
    StoreValues(value1, value2, TotalValue, size, 2);
    cout << endl;
    StoreValues(value1, value2, AverageValue, size, 1);
    cout << endl;
    char class_array[]= {'E','D','C','B','A'};
    
    cout << "class" << setw(12) << "SubjectP" << setw(12) << "SubjectQ" << setw(12) <<"Minimum" << setw(11) << "Maximum" << setw(10) << "Total" << setw(12) << "Average" << endl;
    
    for (int i=4; i>=0; i--)
    {
        cout << setw(3) << class_array[i] << setw(11) << *(value1+i) << setw(11) << value2[i] << setw(13) << MinimumValue[i] << setw(11) << MaximumValue[i] << setw(12) << TotalValue[i] << setw(11) << AverageValue[i] << endl;
    }
    cout << endl;
}

struct fields
{
    char unit_name;
    float unit_total;
    float average;
};

int main()
{
    float subjectP[5];
    float subjectQ[5];
    float results[5];
    InputValues(subjectP,5);
    InputValues(subjectQ,5);
    StoreValues(subjectP, subjectQ, results, 5, 3);
    cout << endl;
    StoreValues(subjectP, subjectQ, results, 5, 4);
    cout << endl;
    StoreValues(subjectP, subjectQ, results, 5, 2);
    cout << endl;
    StoreValues(subjectP, subjectQ, results, 5, 1);
    cout << endl;
    PrintSummary(subjectP, subjectQ, 5);
    
    struct fields subP, subQ;
    {
        subP.unit_total = 0;
        subQ.unit_total = 0;
        
        for (int i=5; i>0; i--)
        {
            subP.unit_total = subP.unit_total + subjectP[i];
            subQ.unit_total = subQ.unit_total + subjectQ[i];
        }
        cout << "Summary of subjectP :" << subP.unit_total << endl;
        cout << "Summary of subjectQ :" << subQ.unit_total << endl;
    }
    return 0;
}
