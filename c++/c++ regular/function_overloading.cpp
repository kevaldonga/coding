#include <iostream>
using namespace std;
const double pi = 3.1416;
void maths(int a)
{
    cout << "area of cube is " << (a * a * a) << endl;
}
void maths(float r, float h)
{
    cout << "volume of cylinder is " << (pi * r * r * h) << endl;
}
void maths(float l, float b, float h)
{
    cout << "area of rectangle is " << (l * b * h) << endl;
}
int main(void)
{
    char op;
    cout << "what you want yo calculate" << endl;
    cout << "1.area of cube" << endl
         << "2.volume of cylinder" << endl
         << "3.area of rectangle" << endl;
    cin >> op;
    switch (op)
    {
    case '1':
        int a;
        cout << "enter length of cube" << endl;
        cin >> a;
        maths(a);
        break;
    case '2':
        float r1, h1;
        cout << "enter of length of cylinder" << endl;
        cin >> r1;
        cout << "enter height of cylinder" << endl;
        cin >> h1;
        maths(r1, h1);
        break;
    case '3':
        float l, b, h;
        cout << "enter length of rectangle" << endl;
        cin >> l;
        cout << "enter broadness of rectangle" << endl;
        cin >> b;
        cout << "enter height of rectangle" << endl;
        cin >> h;
        maths(l, b, h);
        break;
    default:
        cout << "invalid input  !!!" << endl;
        break;
    }
    return 0;
}