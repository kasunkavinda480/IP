#include <iostream>
#include <cmath>
using namespace std;
struct Date{
    int year;
    int day;
    int month;
};
int main () {

    struct Date today, *ptr_today;
    today.year = 2021;
    today.month = 6;
    today.day = 7;

    ptr_today = &today;
    cout<<ptr_today->year<<": :"<<ptr_today->month<<": :"<<ptr_today->day<<endl;
    cout<<(*ptr_today).day<<endl; //me vidiyatath puluwan
    
    /*int n =99,no;
    int *ptr;
    ptr = &n;
    int arr[4]={7,3,2,1};
    int *aprt = arr;
    cout<<"array memmery address"<<aprt<<endl; //array memory address
    cout<<"array 0 value"<<*aprt<<endl;
    cout<<"array 1 value"<<*(aprt+1)<<endl;

    cout<<"Memortr Address Number"<<&n<<endl;
    cout<<"Valuse of ptr"<<ptr<<endl;

    cout<<"*ptr"<<*ptr<<endl;
    */
    return 0;
}