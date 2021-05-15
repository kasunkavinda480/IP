//IT19231938
//K A Kasun Kavinda
#include <iostream>
using namespace std;

void drawLinesWithRowCol(int rows, int cols)
{

    for (int a = 0; a < rows; a++)
    {
        for (int i = 0; i < cols; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int i = 3,c = 5;
    drawLinesWithRowCol(i,c);
    return 0;
}