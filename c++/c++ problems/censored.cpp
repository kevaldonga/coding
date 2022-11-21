#include <iostream>
using namespace std;
class sentence
{
    string word;
    string vowels;

public:
    sentence(string, string);
    void check(void);
    void uncensor(void);
    void print(void);
};
sentence ::sentence(string name, string characters) : word(name), vowels(characters)
{
}
void sentence ::print()
{
    cout << "the uncensored string is ----" << endl
         << word;
}
void sentence ::check()
{
    if (vowels.length() == 0)
    {
        cout << "no vowels are given " << endl;
        exit(0);
    }
    for (int i = 0; i < vowels.length(); i++)
    {
        if (!(vowels.at(i) == 'a' || vowels.at(i) == 'e' || vowels.at(i) == 'i' || vowels.at(i) == 'o' || vowels.at(i) == 'u' || vowels.at(i) == 'A' || vowels.at(i) == 'E' || vowels.at(i) == 'I' || vowels.at(i) == 'O' || vowels.at(i) == 'U'))
        {
            cout << "invalid vowels are given " << endl;
            exit(0);
        }
    }
}
void sentence ::uncensor()
{
    check();
    int j = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word.at(i) == '*')
        {
            word.at(i) = vowels.at(j);
            j++;
        }
    }
}
int main(void)
{
    sentence a1("C*ns*r*d Str*ngs", "eoei");
    a1.uncensor();
    a1.print();
    return 0;
}