#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string no;

public:
    void chk_binary(void);
    void setdata(void);
    void rev_binary(void);
    void result(void);
};
void binary ::chk_binary()
{
    for (int i = 0; i < no.length(); i++)
    {
        if (no.at(i) != '0' && no.at(i) != '1')
        {
            cout << "you have entered wrong input" << endl;
            exit(0);
        }
    }
}
void binary ::setdata()
{
    cout << "enter binary no " << endl;
    cin >> no;
}
void binary ::rev_binary()
{
    for (int i = 0; i < no.length(); i++)
    {
        if (no.at(i) == '1')
        {
            no.at(i) = '0';
        }
        else
        {
            no.at(i) = '1';
        }
    }
}
void binary ::result()
{
    cout << "your reversed binary is " << no << endl;
}
int main(void)
{
    class binary me;
    me.setdata();
    me.chk_binary();
    me.rev_binary();
    me.result();

    return 0;
}