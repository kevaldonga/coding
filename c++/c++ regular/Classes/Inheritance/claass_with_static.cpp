#include <iostream>
using namespace std;
class data
{
private:
    int ID;
    string name;
    static int no;

public:
    void setdata();
    void getdata();
};
void data ::setdata()
{
    cout << "enter ID of employee no " << no << endl;
    cin >> ID;
    cout << "enter name of employee no " << no << endl;
    cin >> name;
}
void data ::getdata()
{
    cout << "ID of employee no " << no << " is " << ID << endl;
    cout << "name of employee no " << no << " is " << name << endl;
    no++;
}

int data :: no = 1;
int main(void)
{
    data class_A[4];
    class_A[0].setdata();
    class_A[0].getdata();

    class_A[1].setdata();
    class_A[1].getdata();

    class_A[2].setdata();
    class_A[2].getdata();
    return 0;
}