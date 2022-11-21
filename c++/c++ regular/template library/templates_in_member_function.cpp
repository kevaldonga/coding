#include<iostream>
using namespace std;
int count=1;
template <typename T>
class op{
        T *arr;
        int size;
    public :
        op(int);
        op sum(op,op);
        void read(void);
        void print(void);
};
template <class T> void op<T> :: read(){
        for(int i=0;i<size;i++){
        cout<<"enter your variable "<<i+1<<" for object "<<count<<" -"<<endl;
        cin>>arr[i];
    }
    count++;
}
template <class T> op<T> op<T> :: sum(op<T> first,op<T> second){
    int s=first.size;
    op<T> result(s);
    for(int i=0;i<result.size;i++){
        // result=result+arr[i];
        result.arr[i]=(first.arr[i]+second.arr[i]);
    }
    return result;
}
template <class T> op<T> :: op(int s) : size(s){
    arr=new T[size];
}
template <class T> void op<T> :: print(){
      for(int i=0;i<size;i++){
          cout<<"array["<<i<<"] = "<<arr[i]<<endl;
        }
        count=1; 
}
int main(void){
    // op<int> integer;     values are being input and then they are shown by print function
    // integer.print();
    op<double> double1(3);
    double1.read();
    op<double> double2(3);
    double2.read();
    op<double> result(3);
    result.sum(double1,double2).print();
    // op<string> double1(3);
    // double1.read();
    // op<string> double2(3);
    // double2.read();
    // op<string> result(3);
    // result.sum(double1,double2).print();
return 0;
}
/*
    notes : 
      --> if you want to declare a template class function 
      outside of class you have to use method I used otherwise it will give an error.
      --> you cant put different sizes in objects because garbage value will be displayed even
      result is sum of two different objects(*where size is different ).
*/