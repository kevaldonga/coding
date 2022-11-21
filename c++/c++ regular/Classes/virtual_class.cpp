#include<iostream>
using namespace std;
class grandfather{
    protected :
        int a,b;
    public :
        void getagf(void);
};
class heir1 : public virtual grandfather{       // virtual class has to be applied when creating a multilevel inheritance 
    public :
        void process1(void);       // we have to use virtual class otherwise it would give an error that  
};                                 // variables of grandfather are ambiguous
class heir2 : virtual public grandfather{
    public :
        void process2(void);
};
class child : public heir1, public heir2{
    public :
        void result(void);
};
void grandfather :: getagf(){
    cout<<"enter the values "<<endl;
    cin>>a>>b;
}
void heir1 :: process1(){
    cout<<"we're now inside 1st derived class "<<endl;
    getagf();
    cout<<"the values are "<<a<<" and "<<b<<endl;
}
void heir2 :: process2(){
    cout<<"we're now inside 1st derived class "<<endl;
    getagf();
    cout<<"the values are "<<a<<" and "<<b<<endl;
}
void child :: result(){
    cout<<"we're now inside derived class derived by two deived class "<<endl;
    getagf();
    cout<<"the values are "<<a<<" and "<<b<<endl;
}
int main(void){
    child one;
    one.result();
return 0;
}