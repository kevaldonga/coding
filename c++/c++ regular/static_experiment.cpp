#include <iostream>
using namespace std;
static int code;
void run()
{
    string name;
    cout << "enter the name of student " << code + 1 << endl;
    cin >> name;
    code++;
}
int main(void)
{
    int count;
    cout << "how much you want to enter" << endl;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        run();
    }

    return 0;
}