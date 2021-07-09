//IT19231938
//K A Kasun Kavinda
#include <iostream>
using namespace std;
void print(float data[], int size){
    for (int a = 0; a < size; a++) {
        cout<< data[a]<<'\t';
    }
    cout<<endl;
}
void input(float data[], int size){
for (int a = 0; a < size; a++)
        {
           cout<<"Entter No :";
           cin>>data[a];
           cout<<endl;
        }
}
void reciprocal(float data[], int size){
for (int a = 0; a < size; a++) {
    data[a] = 1/data[a];
}
}
int main()
{
    float a[] = {10, 20, 30, 40};
    float b[6];
    input(b, 6);
    cout << "array A intial values " << endl;
    print(a, 4);
    cout << "array B intial values " << endl;
    print(b, 6);
    reciprocal(b, 6);
    reciprocal(a, 4);
    cout << "array A after calculation " << endl;
    print(a, 4);
    cout << "array B after calculation " << endl;
    print(b, 6);
    return 0;
}