#include<iostream>
using namespace std;
class sum{
    private :
       int a,b;
    public :
       void read(int x,int y){
           a=x;
           b=y;
       }
        void print(){
            cout<<a<<endl<<b;
        }
        void add(sum a1,sum a2){
            a=a1.a+a2.a;
            b=a2.b+a2.b;
        }
};
// sum add(sum a1,sum a2){
//          sum a3;                   
//             a3.read((a1.a+a2.a),(a1.b+a2.b));
//               return a3;             
//         }
            //----> we have to use return type function in friend function    
            //----> because we cant print it using any member function   
            //----> so we have to assign friend function to other object in main
int main(void){
    sum x,y,z;
    x.read(4,3);
    y.read(2,6);
    z.add(x,y);       //  z=add(x,y);   as friend function cant use member function
    z.print();
    return 0;
}