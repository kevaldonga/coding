#include <iostream>
using namespace std;
class name
{
private:
    int roll_no;
    string data;

public:
    name(void);
    void setdata()
    {
        cout << "enter your roll no " << endl;
        cin >> roll_no;
        cout << "enter your name " << endl;
        cin >> data;
    }
    void getdata()
    {
        cout << "your roll no is " << roll_no << endl;
        cout << "your name is " << data << endl;
    }
};
name :: name(){
    cout<<"hello there"<<endl;
}
int main(void)
{
    class name me;
    me.setdata();
    me.getdata();

    return 0;
}