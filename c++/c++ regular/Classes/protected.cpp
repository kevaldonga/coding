#include<iostream>
using namespace std;
class base{
    protected :     // it derived class visibility is protected
      int a;        // it will be protected 
    private : 
      int b;        // it will not heritage
    public: 
      void read(void);    // it will be protected
      void print(void);
};
class derived : protected base{
  public:
    void read(void);
    void print(void);
};
void base :: read(){
    cout<<"enter the value of a and b "<<endl;
    cin>>a>>b;
}
void derived :: read(){
    cout<<"enter the value of a "<<endl;
    cin>>a;
}
void derived :: print(){
    cout<<"the value of a "<<a<<endl;
}
void base :: print(){
    cout<<"the value of a "<<a<<endl;
    cout<<"the value of b "<<b<<endl;
}
int main(void){
  base first;
  derived second;
  first.read();
  first.print();
  second.read();
  second.print();
     
return 0; 
}
/*
note : 
  --------------------------------VISIBILITY--------------------------------------
  |    MEMBERS         |     private      |      public      |      protected    |
  |  private members   |  wont heritate   |   wont heritate  |    wont heritate  |
  |  public members    |     private      |      public      |      protected    |
  |  protected members |     private      |     protected    |      protected    |
  ////////////////////////////////////////////////////////////////////////////////
*/