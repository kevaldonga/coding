#include <iostream>
#include<cmath>
using namespace std;
class factory
{                                    // to make a toy car
    int wheel, body, figure, result; // minimum wheels - 4 , body - 1 ,figure - 2;
public:
    void read(void);
    void check(void);
    void calculation(void);
    void print();
};
void factory ::read()
{
    cout << "enter no of wheels do you have --" << endl;
    cin >> wheel;
    cout << "enter no of bodies do you have --" << endl;
    cin >> body;
    cout << "enter no of men figures do you have --" << endl;
    cin >> figure;
}
void factory ::check()
{
    if (wheel < 4 || body < 1 || figure < 2)
    {
        cout << "mission failed insufficient material to make a toy !!!!!!" << endl;
        exit(0);
    }
}
void factory ::calculation()
{
    check();
    double a, b, c;
    a = (wheel / 4);
    b = body;
    c = (figure / 2);
    a=floor(a);
    b=floor(b);
    c=floor(c);
    if (a <= b && a <= c)
    {
        result = a;
    }
    else if (b <= a && b <= c)
    {
        result = b;
    }
    else if (c <= a && c <= b)
    {
        result = c;
    }
    else if(a==b && b==c && c==a){
        result=a;
    }
}
void factory ::print()
{
    cout << "we can make sufficiently make " << result << " toys " << endl;
}
int main(void)
{
    factory *ptr = new factory;
    ptr->read();
    ptr->calculation();
    ptr->print();
    delete ptr;
    return 0;
}