#include<iostream>
using namespace std;
class basic{
    private :
       int a;
       float b;
       double c;
    public :
       basic();
       basic(int x);
       basic(int x,float y);
       basic(int x,float y,double z);
       void print();
};
basic :: basic(int x){
    cout<<"constructor with 1 paramemter "<<endl;
    a=x;
    b=0;
    c=0;
    cout<<endl;
}
basic :: basic(int x,float y){
    cout<<"constructor with 2 parameters "<<endl;
    a=x;
    b=y;
    c=0;
    cout<<endl;
}
basic :: basic(int x,float y,double z){
    cout<<"constructor with 3 parameters "<<endl;
    a=x;
    b=y;
    c=z;
    cout<<endl;
}
void basic :: print(){
    cout<<"the value of integer a is "<<a<<endl;
    cout<<"the value of float b is "<<b<<endl;
    cout<<"the value of double c is "<<c<<endl;
    cout<<endl<<endl;
}

int main(void){
    basic first(12);
    first.print();
    basic second(34,7.3);
    second.print();
    basic third(14,3.24,263);
    third.print();
    return 0;
}