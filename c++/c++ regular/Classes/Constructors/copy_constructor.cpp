#include <iostream>
using namespace std;
class sample
{
    int a, b;

public:
    sample() {} // we have to declare empty constructor so it wont give the error
    sample(int, int);
    // sample(sample &);
    void print();
};
sample ::sample(int x, int y)
{
    a = x;
    b = y;
}
// sample ::sample(sample &obj)   even if we dont declare this function compiler has built-in copy constructor
// {
//     a = obj.a;
//     b = obj.b;
// }
void sample ::print()
{
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl
         << endl;
}
int main(void)
{
    sample a1, a2, a3;
    a1 = sample(24, 58);
    a1.print();
    a2 = sample(235, 346);
    a2.print();
    a3 = sample(a2); // even if we remove the copy constructor it will still execute correct result without any error
    // a3=a2;   // this will also work
    a3.print();
    return 0;
}