#include <iostream>
using namespace std;
void interest(float money, float interest_rate = 1.04)
{
    cout << "your money after 1 year with interest of '" << interest_rate << "' will be " << money * interest_rate << endl;
}
void checking_VIP()
{
    int pass;
    cout << "enter your VIP passcode" << endl;
    cin >> pass;
    if (pass == 5628 || pass == 4112 || pass == 5242)
    {
        cout << "wait a moment... " << endl
             << "intializing ...." << endl;
        cout << "welcome" << endl;
    }
    else
    {
        cout << "wrong VIP passcode !!!" << endl;
        exit(0);
    }
}
void checking_emp()
{
    string name;
    cout << "to do further process" << endl;
    cout << "enter your name" << endl;
    cin >> name;
    if (name == "dharmik" || name == "darshan" || name == "divyak" || name == "pranav" || name == "prince")
    {
        cout << "intializing ..." << endl;
        cout << "successful !!" << endl;
    }
    else
    {
        cout << "opps !! incorrect name" << endl;
        exit(0);
    }
}
int main(void)
{
    float number;
    cout << "how much money do you have " << endl;
    cin >> number;
    char op;
    cout << "select your option" << endl;
    cout << "1.employee  \n2.regular client \n3.VIP personnel" << endl;
    cin >> op;
    switch (op)
    {
    case '1':
        checking_emp();
        interest(number, 1.07);
        break;
    case '2':
        interest(number);
        break;
    case '3':
        checking_VIP();
        interest(number, 1.1);
        break;
    default:
        cout << "invalid input !!!" << endl;
        break;
    }
    return 0;
}