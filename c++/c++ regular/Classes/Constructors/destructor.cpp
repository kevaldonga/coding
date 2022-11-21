#include<iostream>
using namespace std;
class sample{
    int a,b;
    static int count;
    public : 
        sample();
        ~sample();
        void print();
};
void sample :: print(){
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl
         << endl;
}
sample :: sample(){
    count++;
    cout<<"constructor is called "<<count<<endl;
}
sample :: ~sample(){
    cout<<"destructor is called for object "<<count<<endl;
    count--;
}
int sample :: count=0;
int main(void){
    cout<<"entering the main "<<endl;
    cout<<"creating a1 "<<endl;
     sample a1;
     {
        cout<<"entering the block "<<endl;
        cout<<"creating a1,a2 "<<endl;
        sample a2,a3;
        cout<<"exting the block "<<endl;
     }
     cout<<"end of the main"<<endl;
    return 0;
}