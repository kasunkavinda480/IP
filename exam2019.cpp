#include <iostream>
#include <iomanip>
using namespace std;

struct MainData{
 string unit_name;
 float unit_total;
 float average;
};
//this for the Insert Values
void InputValues(float mark[], int s)
{
    float a;
    for (int i = 0; i < s; i++)
    {
        cout << "Enter Mark :";
        cin >> a;
        if (a >= 10 && a <= 90)
        {
            mark[i] = a;
        }
        else
        {
            cout << "Enter Mark Invalid" << endl;
            i--;
        }
    }
}

float MinimumValuse(float valus1,float valus2){
    if(valus1 <valus2){
        return valus1;
    }else{
        return valus2;
    }
}

float MaximumValue(float valus1,float valus2){
    float max;
    if(valus1 >valus2){
        max = valus1;
    }else{
        max = valus2;
    }
    return max;
}
float AverageValuse(float valus1,float valus2){
    return ((valus2 + valus1)/2);
}
float TotalValuse(float valus1,float valus2){
    return valus2 + valus1;
}

void StoreValues(float arr1[],float arr2[],float arr3[],int s,int mode) {
    if(mode == 4){
        for(int i=0;i<s;i++){
           arr3[i]= MinimumValuse(arr1[i],arr2[i]);
        }  
    }else if(mode == 3){
        for(int i=0;i<s;i++){
           arr3[i]= MaximumValue(arr1[i],arr2[i]);
        }  
    }else if(mode == 2){
       for(int i=0;i<s;i++){
           arr3[i]= TotalValuse(arr1[i],arr2[i]);
        }  
    }else if(mode == 1){
        for(int i=0;i<s;i++){
           arr3[i]= AverageValuse(arr1[i],arr2[i]);
        }  
    }
}
void printSummery(float valus1[],float valus2[],int s){
    //this fun for the print value
    char class_arr[] = {'E','D','C','B','A'};
    float maxval[5];
    float minval[5];
    float avgval[5];
    float totval[5];
    StoreValues(valus1,valus2,maxval,s,4);
    StoreValues(valus1,valus2,minval,s,3);
    StoreValues(valus1,valus2,avgval,s,2);
    StoreValues(valus1,valus2,totval,s,1);
    cout << "class" << setw(12) << "SubjectP" << setw(12) << "SubjectQ" << setw(12) <<"Minimum" << setw(11) << "Maximum" << setw(10) << "Total" << setw(12) << "Average" << endl;
    for(int i=0;i<s;i++){
        cout << setw(3) << class_arr[i] << setw(11) << *(valus1+i) << setw(11) << valus2[i] << setw(13) << minval[i] << setw(11) << maxval[i] << setw(12) << totval[i] << setw(11) << avgval[i] << endl;
    
    }
}

int main()
{
    
    int size = 5;

    //Array size add using pointer
    float *subjectP = new float[size];
    float *subjectQ = new float[size];
    float *result= new float[size];
    //float subjectP[5],subjectQ[5];
    //This for the get values from subject P
    cout<<"Enter Subject P Values :"<<endl;
    InputValues(subjectP,size);

    cout<<"Enter Subject Q Values :"<<endl;
    InputValues(subjectQ,size);

    //this for the print what is the higest
    StoreValues(subjectP,subjectQ,result,size,3);
    for(int i=0; i<5;i++){
        cout<<"Higest Mark from Subject P And Subject Q :"<<result[i]<<endl;
    }
    StoreValues(subjectP,subjectQ,result,size,4);
    for(int i=0; i<5;i++){
        cout<<"Lowest Mark from Subject P And Subject Q :"<<result[i]<<endl;
    }
    StoreValues(subjectP,subjectQ,result,size,2);
    for(int i=0; i<5;i++){
        cout<<"Toal Mark from Subject P And Subject Q :"<<result[i]<<endl;
    }
    StoreValues(subjectP,subjectQ,result,size,1);
    for(int i=0; i<5;i++){
        cout<<"Average Mark from Subject P And Subject Q :"<<result[i]<<endl;
    }
    
    
    //This for the print Summery
    printSummery(subjectP,subjectQ,size);
    //this for the get values from structute
    struct MainData m1;
    struct MainData m2;
    m1.unit_name = "Subject P";
    m2.unit_name = "Subject Q";
    //float sum =0,avgmark = 0;
    m1.unit_total = 0;
    for (int i = 0; i < size; i++)
    {
       m1.unit_total += subjectP[i];
       m2.unit_total += subjectQ[i];

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