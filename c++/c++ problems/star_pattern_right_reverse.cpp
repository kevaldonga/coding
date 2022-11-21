#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    cout << "Enter the number of rows" << endl;
    cin >> rows;
    cout << endl;
    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < rows - i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j < i; j++)
        {
            cout << " ";
        }

        for (j = i; j <= rows; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}