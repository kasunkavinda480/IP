#include <iostream>
using namespace std;
void printNum(int *num)
{
    cout << *num << endl;
}

//meka user karala pointer types danna puluwan
//void pointer ekata pass karana value eke type eka change karanna 
//puluwan
void ptint(void *ptr, char type)
{
    switch (type)
    {
    case 'i': cout<< *((int*)ptr)<<endl;
        break;
    case 'c': cout<< *((char*)ptr)<<endl;
        break;
    case 'd': cout<< *((double*)ptr)<<endl;
        break;

    default:
        break;
    }
}
int main()
{
    int n = 5;
    char l = 'i';
    ptint(&n,l);
    printNum(&n);
    int s = 20;
    //dynamic memory ekak use karanawa nam new keyword eka 
    //pavichchi karanna onaa
    int *myArray = new int[s];

    for(int i=0;i<s;i++){
        cout<<"Array"<<i<<endl;
    }

    //array eka ayin karana eka
    delete[]myArray;
    myArray=NULL;
}