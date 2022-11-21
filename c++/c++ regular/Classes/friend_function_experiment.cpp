#include <iostream>
using namespace std;
class op
{
private:
    float a, b;

public:
    friend void useless();
    void read()
    {
        cout << "enter the value of integers" << endl;
        cin >> a >> b;
    }
    void task()
    {
        char task2;
        cout << "what you want to do" << endl;
        cin >> task2;
        switch (task2)
        {
        case '+':
            cout << "sum of your numbers is " << a + b << endl;
            break;
        case '-':
            cout << "substraction of your numbers is " << a - b << endl;
            break;
        case '*':
            cout << "multiplication of your numbers is " << a * b << endl;
            break;
        case '/':
            cout << "division of your numbers is " << a / b << endl;
            break;
        default:
            cout << "invalid token " << endl;
            break;
        }
    }
};
void useless()
{
    cout << "hello there" << endl;
}
int main(void)
{
    op forme;
    forme.read();
    useless();
    forme.task();
    return 0;
}