#include <iostream>
using namespace std;
class first;
class second
{
private:
    int x, y;

public:
    void read(int a2, int b2);
    second sum(first one, second two);
    second sub(first one, second two);
    void print();
};
class first
{
private:
    int a, b;

public:
    void read(int a1, int b1);
    friend class second;
    void print();
};
second second ::sum(first one, second two) // well its seems that second second will give error but thankfully not
{
    second ans;
    ans.read((one.a + two.x), (one.b + two.y));
    return ans;
}
second second ::sub(first one1, second two1) // well its seems that second second will give error but thankfully not
{
    second ans;
    ans.read((one1.a - two1.x), (one1.b - two1.y));
    return ans;
}
void first ::print()
{
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
}
void second ::print()
{
    cout << "the value of x is " << x << endl;
    cout << "the value of y is " << y << endl;
}
void first ::read(int a1, int b1)
{
    a = a1;
    b = b1;
}
void second ::read(int a2, int b2)
{
    x = a2;
    y = b2;
}
// you can use same read function for two classes which will work and both classes will share same function !!!!
// this is amazing
int main(void)
{
    first ab;
    second xy, tosum, tosub;
    ab.read(3, 6);
    xy.read(6, 4);
    tosum = tosum.sum(ab, xy); // only this will work if you want to pass object and return it
    tosum.print();
    tosub = tosub.sub(ab, xy);
    tosub.print();
    return 0;
}