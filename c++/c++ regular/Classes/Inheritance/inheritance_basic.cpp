#include <iostream>
using namespace std;
class base
{
public:
    int a, b;
    base() {}
    base(int, int);
    void print();
};
class derived : private base
{ // public members of base class will be private of derived class
public:
    void read(int, int);
    void print();
};
void derived ::read(int x, int y)
{ // a and b are private members of derived class so you have to access them by member function
    a = x;
    b = y;
}
base ::base(int x, int y)
{
    a = x;
    b = y;
}
void base ::print()
{
    cout << "the value of both integers is " << a << endl
         << b;
}
void derived ::print()
{
    cout << "the value of both integers is " << a << endl
         << b;
}
int main(void)
{
    base first;
    derived second;
    first = base(6, 2);
    //second=derived(2,9); // you cant use constructor of base class via private derived class as it became private
    second.read(7, 9);
    first.print();
    second.print();
    return 0;
}