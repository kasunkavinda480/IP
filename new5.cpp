#include <iostream>
using namespace std;

typedef struct
{
    string license;
    string dname;
    float channelling;
    int nppation[7];
} Doctor;

Doctor getDate(Doctor d, int size)
{
    cout << "Enter medical license :";
    cin >> d.license;
    cout << endl;
    cout << "Enter the name of Doctor :";
    cin >> d.dname;
    cout << endl;
    cout << "Enter Doctor channelling :";
    cin >> d.channelling;
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Enter the No of Patients-Day" << i << " :";
        cin >> d.nppation[i];
        cout << endl;
    }
    return d;
}

int calDocFee(Doctor ds, int size)
{
    float fee = ds.channelling;
    float tot = 0;
    for (int i = 0; i < size; i++)
    {
        tot += ds.nppation[i] * fee;
    }
    return tot;
}
void print(Doctor dd)
{
    cout << "Name is " << dd.dname << endl;
    for (int i = 0; i < 2; i++){
        cout<<(dd.nppation[i])<<endl;
    }
}

int main()
{
    Doctor def,t;
    int s = 2;
    int arr[7];
    t = getDate(def,s);
    

    /* cin >> d.dname;
    for (int i = 0; i < s; i++)
    {
        cout << "Enter Enter the No of Patients-Day" << i << " :";
        cin >> d.nppation[i];
        cout << endl;
    } */
    print(t);

    float tots = calDocFee(t,s);
    cout<<"Total Channeling free "<<tots<<endl;
    return 0;
}