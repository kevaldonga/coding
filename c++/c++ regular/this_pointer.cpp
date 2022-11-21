#include<iostream>
using namespace std;
class basic{
        int a,b;
    public :
        basic read(int a,int b);
        void print(void);
};
basic basic :: read(int a,int b){
    this->a=a;
    this->b=b;
    return *this;
}
void basic :: print(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
}
int main(void){
        basic *ptr=new basic;
        ptr->read(13,53);        // *(ptr).read(13,53); -----> but you know that right
        ptr->print();            // *(ptr).print();
        ptr->read(123,341).print();     // because read function is returning object now you can directly assign to print it 
        cout<<"the address of currently made ogject is "<<ptr<<endl;
        delete ptr;
    return 0;
}