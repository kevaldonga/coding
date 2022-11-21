#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;

public:
    complex() {}
    complex(int a, int b) : real(a), img(b) {}
    complex operator+(complex s);
    void display(void);
};
void complex ::display()
{
    cout << "the value is " << real << " r  + " << img << " i" << endl;
}
complex complex ::operator+(complex sum)
{
    complex temp;
    temp.real = real + sum.real;
    temp.img = img + sum.img;
    return temp;
}
int main(void)
{
    complex a1(23, 5), a2(42, 9), a3;
    // a3 = a2.sum(a1);
    // a2.sum(a1).display();
    a3 = a1 + a2;
    a3.display();
    return 0;
}