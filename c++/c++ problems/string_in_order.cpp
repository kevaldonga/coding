#include <iostream>
using namespace std;
class str
{
    string word;

public:
    str(string a) : word(a) {}
    bool is_in_order(void);
};
bool str ::is_in_order()
{
    for (int i = 0; i < word.length(); i++)
    {
        if (i == 0)
        {
            continue;
        }
        if (word[i] >= 65 && word[i] <= 90)
        {
            word[i] = word[i] + 32;
        }
        if (word[i] < word[i - 1])
        {
            return false;
            exit(0);
        }
    }
    return true;
}
int main(void)
{
    str a1("abcD");
    a1.is_in_order() == true ? cout << "your string is in order " << endl : cout << "your string is not in order " << endl;
    // I learned it today so I implemented in my code suceeded in first try !!!!!
    return 0;
}