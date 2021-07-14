//IT19231938
//K A Kasun Kavinda
#include <iostream>
using namespace std;

void PrintTot(int data[3][5])
{
    int tot = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 5; a++)
        {
            tot += data[i][a];
        }
        cout << "Row 0 Total is = " << tot << endl;
    }
}
int main()
{

    int table[3][5] = {{1, 4, 7, 10, 13}, {6, 12, 18, 24, 30}, {5, 2, 9, 3, 8}};
    PrintTot(table);
    return 0;
}


