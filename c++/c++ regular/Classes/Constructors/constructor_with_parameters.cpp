#include <iostream>
using namespace std;
class basic
{
private:
    int a, b;

public:
    basic(int, int);
    void print();
};
basic ::basic(int x, int y)
{
    a = x;
    b = y;
}
void basic ::print()
{
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
}
int main(void)
{
    basic a(6, 3);    // a=basic(3,45);
    a.print();
    return 0;
}