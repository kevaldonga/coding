#include<iostream>
#include<iomanip>
using namespace std;
class store{
        string cust_name,product_name,catagory;
        double price;
    public :
        store(string,string,string,double);
        void print(void);
};
store :: store(string name,string product,string section,double money):cust_name(name),product_name(product),catagory(section),price(money){
    cout<<"intializing the store constructor "<<endl;
}
void store :: print(){
    cout<<"    "<<cust_name<<"      "<<catagory<<"       "<<product_name<<"    "<<price<<"/-"<<endl;
}
void catagory(){        // function to print catagories column of data
    cout<<endl<<"   customer name  "<<"  catagory  "<<"    product name  "<<"  price  "<<endl;
}
int main(void){
    store sunday("keval donga","dell vostrov","laptop",45299.99);
    catagory();
    sunday.print();
return 0;
}