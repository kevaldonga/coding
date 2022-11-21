#include <iostream>
using namespace std;
string reverse(string s)
{
    int length = s.length();
    char temp;
    // if i= 0
    // then s[i] is first char
    // s[length-i-1] is i'th char by last                   
    for (int i = 0; i < length/2; i++)
    {
        temp = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = temp;
    }
    return s;
}
int main(void)
{
    string s;
    cout<<"enter string you want to reverse ..."<<endl;
    getline(cin,s);
    cout<<"your reversed string is "<<reverse(s)<<endl;
    return 0;
}