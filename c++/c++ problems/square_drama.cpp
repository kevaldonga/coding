#include <iostream>
using namespace std;
class square
{
    int n;

public:
    square();
    void process(void);
};
square ::square()
{
    cout << "enter the number you want sqaure array of " << endl;
    cin >> n;
}
void square ::process()
{
    int number[n][n], i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            number[i][j] = n;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "number[" << i + 1 << "][" << j + 1 << "] = " << number[i][j] << endl;
        }
    }
}
int main(void)
{
    square keval;
    keval.process();
    return 0;
}