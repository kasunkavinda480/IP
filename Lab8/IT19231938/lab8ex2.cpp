//IT19231938
//K A Kasun Kavinda
#include <iostream>
using namespace std;
void printAll(char t[4][20])
{
    for (int i = 0; i < 4; i++)
    {
        for (int a = 0; a < 20; a++)
        {
            cout << t[i][a];
        }
        cout << endl;
    }
}

int main()
{
    char arr[4][20] = {"kamal", "wimal", "anjana", "lalitha"};
    printAll(arr);
    return 0;
}