#include <iostream>
using namespace std;
class base1
{
protected:
    int a;
    void print1(void);

public:
    void read1(void);
};
class base2
{
protected:
    int b;
    void print2(void);

public:
    void read2(void);
};
class derived : public base1, public base2
{
    public :
    derived(void);
    void sum(void);
};
derived :: derived(){
    print1();
    print2();
}
void base1 :: read1(){
    cout<<"enter the value of 1st integer "<<endl;
    cin>>a;
}
void base2 :: read2(){
    cout<<"enter the value of 2nd integer "<<endl;
    cin>>b;
}
void base1 :: print1(){
    cout<<"intializing base 1 function "<<endl;
}
void base2 :: print2(){
    cout<<"intializing base 2 function "<<endl;
}
void derived :: sum(){
    cout<<"the sum of the two integers is "<<a+b<<endl;
}
int main(void)
{
    derived answer;
    answer.read1();
    answer.read2();
    answer.sum();
    return 0;
}