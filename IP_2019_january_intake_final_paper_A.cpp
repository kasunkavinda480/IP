/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

void InputMarks(float marks[], int size)
{
    char class_array[] = {'A','B','C','D','E'};
    int x;
    for (int i=0; i<size;)
    {
        cout << "Enter marks of class " << class_array[i] << " : ";
        cin >> x;
        if ((x>=0) && (x<=100))
        {
            marks[i]=x;
            i++;
        }
        else
        {
            cout << "Invalid marks" << endl;
        }
    }
}

float MinimumMark(float value1, float value2)
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

float MaximumMark(float value1, float value2)
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

float AverageMark(float value1, float value2)
{
    float avg=0.0;
    avg = (value1 + value2) / 2.0;
    return avg;
}

float TotalMark(float value1, float value2)
{
    float total=0;
    total = value1 + value2;
    return total;
}

void StoreData(float value1[], float value2[], float value3[], int size, char mode)
{
    char class_array[] = {'A','B','C','D','E'};
    for (int i=0; i<size; i++)
    {
        if (mode == 'G')
        {
            value3[i]= MaximumMark(value1[i], value2[i]);
            cout << "Maximum marks of subject P and Subject Q in class " << class_array[i] << " : " << value3[i] << endl;
        }
        
        if (mode == 'L')
        {
            value3[i]= MinimumMark(value1[i], value2[i]);
            cout << "Minimum marks of subject P and Subject Q in class " << class_array[i] << " : " << value3[i] << endl;
        }
        
        if (mode == 'T')
        {
            value3[i]= TotalMark(value1[i], value2[i]);
            cout << "Total marks of subject P and Subject Q in class " << class_array[i] << " : " << value3[i] << endl;
        }
        
        if (mode == 'A')
        {
            value3[i]= AverageMark(value1[i], value2[i]);
            cout << "Average marks of subject P and Subject Q in class " << class_array[i] << " : " << value3[i] << endl;
        }
    }
    cout << endl;
}

void PrintReport(float value1[], float value2[], int size)
{
    float max[5], min[5], total[5], average[5];
    
    StoreData(value1, value2, max, size, 'G');
    StoreData(value1, value2, min, size, 'L');
    StoreData(value1, value2, total, size, 'T');
    StoreData(value1, value2, average, size, 'A');
    char class_array[] = {'A','B','C','D','E'}; 
    
    cout << "Class" << setw(18) << "Subject P" << setw(16) << "Subject Q" << setw(14) << "Minimum" << setw(16) << "Maximum" << setw(16) << "Total" << setw(16) << "Average" << endl;
    for (int i=0; i<size; i++)
    {
        cout << setw(3) << class_array[i] << setw(16) << value1[i] << setw(16) << value2[i] << setw(16) << min[i] << setw(16) << max[i] << setw(16) << total[i] << setw(16) << average[i] << endl;
    }
}

struct fields
{
    char subject_name;
    int total;
    float average;
};

int main()
{
    float subject_1[5], subject_2[5], results[5];
    cout << "Enter subject P marks" << endl;
    InputMarks(subject_1, 5);
    cout << endl;
    cout << "Enter subject Q marks" << endl;
    InputMarks(subject_2, 5);
    cout << endl;
    PrintReport(subject_1, subject_2, 5);
    cout << endl;
    
    struct fields sub_1, sub_2;
    {
        sub_1.subject_name = 'P';
        sub_2.subject_name = 'Q';
        sub_1.total = 0;
        sub_2.total = 0;
        
        for (int i=0; i<5; i++)
        {
            sub_1.total = sub_1.total + subject_1[i];
            sub_2.total = sub_2.total + subject_2[i];
        }
        sub_1.average = sub_1.total/5.0;
        sub_2.average = sub_2.total/5.0;
        
        cout << "Subject name : " << sub_1.subject_name << endl;
        cout << "Total marks of subject P : " << sub_1.total << endl;
        cout << "Average marks of subject P : " << sub_1.average << endl;
        cout << endl;
        cout << "Subject name : " << sub_2.subject_name << endl;
        cout << "Total marks of subject Q : " << sub_2.total << endl;
        cout << "Average marks of subject Q : " << sub_2.average << endl;
    }
    return 0;
}