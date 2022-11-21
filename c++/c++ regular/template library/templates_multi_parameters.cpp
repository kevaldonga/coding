#include<iostream>
using namespace std;
template <typename T1,typename T2>
class me{
        T1 a;
        T2 b;
    public :
        me();
        void print(void);
};
template<class T1,class T2> me<T1,T2> :: me(){
    cout<<"enter the value of your first variable "<<endl;
    cin>>a;
    cout<<"enter the value of your second variable "<<endl;
    cin>>b;
}
template<class T1, class T2> void me<T1,T2> :: print(){
    cout<<"the value of your first variable "<<a<<endl;
    cout<<"the value of your second variable "<<b<<endl;
}
int main(void){
    me<int,string> first;
    first.print();
return 0;
}