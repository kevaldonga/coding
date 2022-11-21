#include <iostream>
using namespace std;
int count = 1;
class basic
{
    // static int count;
    int a, b;

public:
    basic(int, int);
    basic() {}
    void print(void);
};
// int basic :: count = 1;
basic ::basic(int x, int y) : a(x), b(y)
{
}
void basic ::print()
{
    cout << "the value of object " << count << " a is " << a << endl;
    cout << "the value of object " << count << " b is " << b << endl;
    count++;
}
int main(void)
{
    int n;
    cout << "how many objects you want to create " << endl;
    cin >> n;
    basic *ptr = new basic[n];
    for (int i = 0; i < n; i++)
    {
        ptr[i] = basic((i + 3), (i + 4));
    }
    for (int i = 0; i < n; i++)
    {
        ptr[i].print();
        // ptr->print();       // alternative
        // ptr++;
    }
    delete[] ptr;
    return 0;
}