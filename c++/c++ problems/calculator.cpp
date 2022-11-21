#include <iostream>
#include <cmath>
using namespace std;
class simple
{
protected:
    double a, b;

public:
    void read(void);
    void calc(void);
};
void simple ::read()
{
    cout << "enter the value of a" << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;
}
void simple ::calc()
{
    cout << "commercial calculator is intializing ............." << endl;
    read();
    char op;
    cout << "enter your operation (+, -, /, *) -----" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "the sum of your value is " << a + b << endl;
        break;
    case '-':
        cout << "the subtraction of your value is " << a - b << endl;
        break;
    case '/':
        cout << "the division of your value is " << a / b << endl;
        break;
    case '*':
        cout << "the mulitiplication of your value is " << a * b << endl;
        break;
    default:
        cout << "invalid input !!! " << endl;
        break;
    }
}
class scientific
{
protected:
    double x, y;

public:
    void read1(void);
    void read2(void);
    void calc1(void);
    void calc2(void);
};
void scientific ::read1()
{
    cout << "enter the value " << endl;
    cin >> x;
}
void scientific ::read2()
{
    cout << "enter the first value " << endl;
    cin >> x;
    cout << "enter the second value " << endl;
    cin >> y;
}
void scientific ::calc1()
{
    cout << "scientific calculator is intializing ............." << endl;
    char op;
    cout << "enter your operation -----" << endl;
    cout << "1. square " << endl
         << "2. squareroot " << endl
         << "3. cuberoot " << endl
         << "4. x^y " << endl
         << "5. other " << endl;
    cin >> op;
    switch (op)
    {
    case '1':
        read1();
        cout << "square of your no is " << (x * x) << endl;
        break;
    case '2':
        read1();
        cout << "squareroot of your no is " << sqrt(x) << endl;
        break;
    case '3':
        read1();
        cout << "cuderoot of your no is " << cbrt(x) << endl;
        break;
    case '4':
        read2();
        cout << "the value of " << x << " ^ " << y << " is " << pow(x, y) << endl;
        break;
    case '5':
        calc2();
        break;
    default:
        cout << "invalid input !!! " << endl;
        break;
    }
}
void scientific ::calc2()
{
    char op;
    cout << "enter the command of the value you want to get " << endl;
    cout << "1.sin "
         << "     4.asin " << endl
         << "2.cos "
         << "     5.acos " << endl
         << "3.tan "
         << "     6.atan " << endl
         << "7.sinh "
         << "    8.cosh " << endl
         << "9.tanh " << endl;
    cin >> op;
    read1();
    switch (op)
    {
    case '1':
        cout << "the value of sin is " << sin(x) << endl;
        break;
    case '2':
        cout << "the value of cos is " << cos(x) << endl;
        break;
    case '3':
        cout << "the value of tan is " << tan(x) << endl;
        break;
    case '4':
        cout << "the value of asin is " << asin(x) << endl;
        break;
    case '5':
        cout << "the value of acos is " << acos(x) << endl;
        break;
    case '6':
        cout << "the value of atan is " << atan(x) << endl;
        break;
    case '7':
        cout << "the value of sinh is " << sinh(x) << endl;
        break;
    case '8':
        cout << "the value of cosh is " << cosh(x) << endl;
        break;
    case '9':
        cout << "the value of tanh is " << tanh(x) << endl;
        break;
    default:
        cout << "invalid input !!! " << endl;
        break;
    }
}
class hybrid : public simple, public scientific
{
public:
    void process(void);
};
void hybrid ::process()
{
    char answer;
    cout << "choose your calculator " << endl;
    cout << "1.simple calculator           2.scientific calculator " << endl;
    cin >> answer;
    if (answer == '1')
    {
        calc();
    }
    else if (answer == '2')
    {
        calc1();
    }
    else
    {
        cout << "invalid input !!! " << endl;
    }
}
int main(void)
{
    hybrid a1;
    a1.process();
    //  scientific a2;     //somehow it gives error that scientific class is ambiguous
    return 0;
}