#include <iostream>
using namespace std;
class second;
class first
{
    int a;

public:
    void read();
    void print();
    friend void swap(first &, second &);
};
class second
{
    int b;

public:
    void read();
    void print();
    friend void swap(first &, second &);
};
void first ::read()
{
    cout << "enter value of a" << endl;
    cin >> a;
}
void second ::read()
{
    cout << "enter value of b" << endl;
    cin >> b;
}
void first ::print()
{
    cout << "the new value of a is " << a << endl;
}
void second ::print()
{
    cout << "the new value of b is " << b << endl;
}
void swap(first &o1, second &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}
int main(void)
{
    first one;
    second two;
    one.read();
    two.read();
    swap(one, two);
    one.print();
    two.print();
    return 0;
}