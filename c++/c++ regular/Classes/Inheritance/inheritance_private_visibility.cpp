#include <iostream>
using namespace std;
class base
{
    int a, b;
public:
    base() {}
    void read(int, int);
    int multiply(void);
    void print();
};
class derived : private base
{
public:
    void private_process();
};
void derived ::private_process()   
{
    read(7, 4);
    cout << "multiplication of two numbers is " << multiply()<<endl;
}
void base ::read(int x, int y)
{
    a = x;
    b = y;
}
int base ::multiply()
{
    return a * b;
}
void base ::print()
{
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
}
int main(void)
{
    base a1;
    a1.read(6, 7);
    cout << "multiplication of two numbers is " << a1.multiply()<<endl;
    derived a2;
    a2.private_process();
    return 0;
}
//  note :-
// in derived class you cant access private data members of base class 
// even if you are using member function of derived class
// those private data members only be accessed by thier public member function 
// to do that we have to use read() function of base class inside public member function<<endl