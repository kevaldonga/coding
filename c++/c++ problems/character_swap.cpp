#include <iostream>
using namespace std;
class change
{
    string sentence;
    char a, b;

public:
    change(string, char, char);
    void check(void);
    void process(void);
    void print(void);
};
change ::change(string word, char first, char second) : sentence(word), a(first), b(second)
{
}
void change ::check()
{
    int x = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence.at(i) == a)
        {
            x = 1;
        }
    }
    if (x != 1)
    {
        cout << "entered characters are not present in string " << endl;
        exit(0);
    }
}
void change ::process()
{
    check();
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence.at(i) == b)
        {
            sentence.at(i) = a;
        }
        else if (sentence.at(i) == a)
        {
            sentence.at(i) = b;
        }
    }
}
void change ::print()
{
    cout << "your modified string is ----" << endl
         << sentence;
}
int main(void)
{
    change word("hello there", 'l', 'e');
    word.process();
    word.print();
    return 0;
}