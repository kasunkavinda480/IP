//IT19231938
//K A K Kavinda
//WD_2021Jan/ Pro-rata

//print numbers from 1 to 10 and break the program at line number 5. Usebreak statement
#include <iostream>
using namespace std;
int main()
{
    int q = 1;
    do
    {
        cout <<q <<endl;
        if(q == 5){
            //line break this is for the terminate the loop
            break;
        }
        q++;
    } while (q <= 10);
    
}