#include<iostream>
using namespace std;
class second;
class first{
    private :
      int a;
    public :
      friend int add(first a1,second a2);
      void read();
};
class second{
    private :
      int b;
    public :
      friend int add(first a1,second a2);
      void read();
}; 
 int add(first a1,second a2){
    return a1.a+a2.b;          // intially it throws an error that a is inccessible but when you write complete code it will dissappear
}      //dont look at the error complete your code first
void first :: read(){
    cout<<"enter value of a"<<endl;
    cin>>a;
}
void second :: read(){
    cout<<"enter value of b"<<endl;
    cin>>b;
}
int main(void){
    first one;
    second two;
    one.read();
    two.read(); 
    cout<<"the sum value of two class integers is  "<<add(one,two);
return 0;
}