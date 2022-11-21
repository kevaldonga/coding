#include <iostream>
using namespace std;
int countprime(int count)
{
    int num, result = 1; // because i cant define 2 as prime no in code
    if (count < 2)
    {
        return 0;
    }
    for (int num = 2; num < count; num++)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
            if (i == num - 1)
            {
                result++;
            }
        }
    }
    return result;
}
int main(void)
{
    int no;
    cout << "enter the no " << endl;
    cin >> no;
    cout << "the total prime numbers within your value is " << countprime(no) << endl;
    return 0;
}