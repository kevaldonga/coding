#include<iostream>
using namespace std;
class basic{
        int a,b;
    public :
        basic(int,int);
        void print(void);
};
basic :: basic(int x,int y): a(x),b(y){
}
void basic :: print(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
}
int main(void){
    basic *ptr=new basic(23,65);
    // ptr->read(3,6);     // (*ptr).read(3,6);
    ptr->print();          // (*ptr).print();
    delete ptr;
return 0;
}