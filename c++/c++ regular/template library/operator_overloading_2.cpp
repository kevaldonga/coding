#include<iostream>
using namespace std;
template <typename T>
class basic{
        T v1,v2;
    public :
        void display(void);
        void read(void);
        basic operator ++();
};
template <class T> void basic<T> :: read(){
    cout<<"enter the value right here "<<endl;
    cin>>v1;
}
template<class T> void basic<T>::display(){
    cout<<"your value is " <<v1<<endl;
}
template <class T> basic<T> basic<T> :: operator++(){
    cout<<"enter the value you want to add to "<<endl;
    cin>>v2;
    basic temp;
    temp.v1=v1+v2;
    return temp;
}
int main(void){
    basic<string> a1,a2;
    a1.read();
    // a2=a1++;   this will give you an error as you can put operator infront not behind .
    a2=++a1;
    a2.display();
return 0;
}