#include <iostream>
using namespace std;
class bank
{
    float price, interest_rate, returnvalue;
    int years;

public:
    bank() {}
    bank(float, float, int);
    bank(float, int, int);
    void print();
};
void bank ::print()
{
    cout << "your return value is " << returnvalue << " within " << years << " years " << endl;
}
bank ::bank(float p, float r, int n)
{
    price = p;
    interest_rate = r;
    years = n;
    returnvalue = p;
    for (int i = 0; i < n; i++)
    {
        returnvalue = returnvalue * (1 + interest_rate);
    }
}
bank ::bank(float p, int r, int n)
{
    price = p;
    interest_rate = float(r);
    years = n;
    returnvalue = p;
    for (int i = 0; i < n; i++)
    {
        returnvalue = returnvalue * (1 + (interest_rate / 100));
    }
}
int main(void)
{
    bank m1, m2, m3;
    float p, r;
    int n, R;
    cout << "enter the value of your money " << endl;
    cin >> p;
    cout << "enter the interest rate in 0.0X format " << endl;
    cin >> r;
    cout << "enter the number of years " << endl;
    cin >> n;
    m1 = bank(p, r, n);
    m1.print();
    cout << "enter the value of your money " << endl;
    cin >> p;
    cout << "enter the interest rate in regular format " << endl;
    cin >> R;
    cout << "enter the number of years " << endl;
    cin >> n;
    m2 = bank(p, R, n);
    m2.print();
    return 0;
}