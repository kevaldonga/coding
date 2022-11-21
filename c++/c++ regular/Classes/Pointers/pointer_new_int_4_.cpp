#include<iostream>
using namespace std;
int main(void){
    int *ptr=new int(5);
    cout<<"the value of ptr is "<<ptr<<endl; // it will show the value inside of ptr which is adress of int (5)
    cout<<"the value at ptr is "<<*ptr<<endl;  // it will show the value stored inside of the adress 
    delete ptr;
return 0;
}