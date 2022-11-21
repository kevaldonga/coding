#include <iostream>
using namespace std;
class small
{
    string sentence;

public:
    small(string h) : sentence(h) {}
    void process(void);
    void print(void);
    void check(void);
};
void small ::process()
{
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] >= 65 && sentence[i] <= 90)
        {
            if (sentence[i] == 32)
            {
                continue;
            }
            sentence[i] = sentence[i] + 32;
        }
    }
}
void small ::check()
{
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] >= 97 && sentence[i] <= 122)
        {
            if (sentence[i] =! 32)
            {
                break;
            }
        }
        if (i == sentence.length())
        {
            cout<<"hello there";
            sentence.append(1,'!');
        }
    }
}
void small ::print()
{
    // check();
    cout << "your string is --  " << sentence << endl;
}
int main(void)
{
    small a1("HELLO THERE");
    a1.process();
    a1.print();
    return 0;
}