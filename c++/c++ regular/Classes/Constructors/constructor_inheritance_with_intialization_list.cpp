#include <iostream>
using namespace std;
class base
{
protected:
    int a, b;

public:
    base(int, int);
    void print1(void);
};
class derived : protected base
{
protected:
    int c, v;

public:
    derived(int, int, int, int);
    void print2(void);
};
base ::base(int x, int y) : a(x), b(y)
{
    cout << "constructor of base class is called" << endl;
}
// derived :: derived(int w,int x,int y,int z): w(a),w(b),c(y),v(z){ //we cant do like this cause it will give an error
derived ::derived(int w, int x, int y, int z) : base(w, x), c(y), v(z)
{ // it is behaviour of compiler of c++ for this kind of operation
    cout << "constructor of derived class is called" << endl;
}
void base ::print1(void)
{
    cout << "function of base class is running " << endl;
    cout << "the value of base a is " << a << endl;
    cout << "the value of base b is " << b << endl;
}
void derived ::print2(void)
{
    print1();
    cout << "function of derived class is running " << endl;
    cout << "the value of derived class c is " << c << endl;
    cout << "the value of derived class v is " << v << endl;
}
int main(void)
{
    derived a1(10, 20, 30, 40);
    // a1.print();     // it will run derived class function as first priority
    // a1.print1();   it will become protected member after inheritance so it is inaccessible
    a1.print2();
    return 0;
}