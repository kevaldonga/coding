#include <iostream>
using namespace std;
int main(void)
{
    int b;
    int *a = &b;
    cout << "enter the value of b" << endl;
    cin >> b;
    cout << "value of ptr is " << a << endl;  //ptr 'a' shows us the address of  'b' stored in pointer in c++
    cout << "value at ptr is " << *a << endl; //ptr '*a' shows us the value of  'b' stored in pointer in c++
    int x;                                    //   we can do it without pointer
    int &y = x;                               //   this interaction will do share the memory location of both variables
    // which means if one value changes other will do so
    cout << "enter the value x" << endl;
    cin >> x;
    cout << "the value of y is " << y << endl; //print same value as x
    y = y + 6;
    cout << "the value of x after change is " << x << endl; //if y value changes y will also do
    return 0;
}