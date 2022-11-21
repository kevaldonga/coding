#include<iostream>
using namespace std;
class base{
    protected :
        int a;
    public :
        base(int);
        virtual void print(void);  // if you create base function virtual base pointer will run derived function
};
class derived : public base{
    protected :
        int c;
    public :
        derived(int,int);
        void print(void);
};
base :: base(int x): a(x){
    cout<<"constructor of base class is called"<<endl;
}
derived :: derived(int w,int y): base(w),c(y){    
    cout<<"constructor of derived class is called"<<endl;
}
void base :: print(void){
    cout<<"function of base class is running "<<endl;
    cout<<"the value of base a is "<<a<<endl;
}
void derived :: print(void){
    cout<<"function of derived class is running "<<endl;
    cout<<"the value of derived class c is "<<c<<endl;
}
int main(void){
    base obj_base(20);
    derived obj_derived(20,30);
    base *ptr;
    ptr=&obj_derived;
    ptr->print();
return 0;
}