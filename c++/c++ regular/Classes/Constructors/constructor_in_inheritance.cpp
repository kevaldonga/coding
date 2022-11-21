#include <iostream>
using namespace std;
class base1
{
    int a;

public:
    base1(int);
    void printbase1(void);
};
class base2
{
    int b;

public:
    base2(int);
    void printbase2(void);
};
class derived : public base1, public base2
{
    int t, u;

public:
    derived(int, int, int, int);  // we can decalre constructor outside the class by this method **by not distributing any variables 
    void printderived(void);
};
derived :: derived(int w, int x, int y, int z) : base1(w), base2(x) 
    {                                                             
        cout << "constructor of derived class is called " << endl;
        t = y;
        u = z;
    }
void base1 ::printbase1()
{
    cout << "value of a is " << a << endl;
}
void base2 ::printbase2()
{
    cout << "value of b is " << b << endl;
}
void derived ::printderived()
{
    cout << "value of x is " << t << endl
         << "value of y is " << u << endl;
}
base1 ::base1(int a1)
{
    cout << "constructor of base class 1 is called " << endl;
    a = a1;
}
base2 ::base2(int b1)
{
    cout << "constructor of base class 2 is called " << endl;
    b = b1;
}
int main(void)
{
    derived myobj1(1, 2, 3, 4);
    myobj1.printbase1();
    myobj1.printbase2();
    myobj1.printderived();
    return 0;
}