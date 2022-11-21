#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void read1(int);
};
class marks : public student
{
protected:
    float physics;
    float maths;

public:
    void read(float, float);
};
class result : public marks
{
protected:
    float result;

public:
    void process(void);
    void print(void);
};
void student ::read1(int a1)
{
    a1=roll_no;
}
void marks ::read(float a1, float a2)
{
    physics = a1;
    maths = a2;
}
void result ::process()
{
    result = (physics + maths) / 2;
}
void result ::print()
{
    cout << "your roll no is " << roll_no << endl;
    cout << "marks in your subjects is " << physics << " and " << maths << endl;
    cout << "your result is " << result << endl;
}
int main(void)
{
    result a3;
    a3.read1(1056);
    a3.read(90, 85);
    a3.process();
    a3.print();
    return 0;
}