#include <iostream>
#include <cmath>
using namespace std;
long Tobinary(string bits)
{
    long value = 0;
    for (int i = bits.length()-1,j=0; i >= 0; i--)
    {
        if(!(bits[i]=='0' || bits[i]=='1')){
            cout<<" in invalid format ! "<<endl<<"[ERROR CODE : 403]"<<endl;
            exit(0);
        }
        if(bits[i]=='1'){
            value += pow(2,j);
        }
        j++;
    }
    return value;
}
int main(void)
{
    string s;
    cout<<"enter your binary expresssion :"<<endl;
    cin>>s;
    cout<<"Decimal value to of your binary expression is : "<<Tobinary(s)<<endl;
    return 0;
}