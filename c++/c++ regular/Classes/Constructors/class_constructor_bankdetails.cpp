#include<iostream>
using namespace std;
class bankdata{
    private :
       string name;
       string acc_no;
       string cust_ID;
    public :
       bankdata();
       void read();
       void print();
       void check_acc_no();
       void check_custID();
       
};
bankdata :: bankdata(){
    cust_ID='0';
}
void bankdata :: read(){
    static int count=1;
    cout<<"enter your details carefully  "<<endl;
    cout<<"enter username of employee no. "<<count<<endl;
    cin>>name;
    cout<<"enter acc no of employee no. "<<count<<endl;
    cin>>acc_no;
    check_acc_no();
    cout<<"enter customer ID of employee no. "<<count<<endl;
    cin>>cust_ID;
    check_custID();
    count++;
}
void bankdata :: check_acc_no(){
    if(acc_no.length()!=12){
        cout<<"you have enetered invalid acc no !!!"<<endl;
        exit(0);
    }
}
void bankdata :: check_custID(){
    if(cust_ID.length()>8){
        cout<<"your customer ID is invalid !!!"<<endl;
        exit(0);
    }
}
void bankdata :: print(){
    static int count=1;
   cout<<count<<".     "<<name<<"        "<<acc_no<<"    "<<cust_ID<<endl;
   count++;
}
int main(void){
    int no;
    cout<<"how many employee data you want to enter "<<endl;
    cin>>no;
    bankdata emp[no];
    for(int i=0;i<no;i++){
        emp[i].read();
    }
    cout<<"  username     acc_no      cust_ID     "<<endl;
    for(int i=0;i<no;i++){
      emp[i].print();
    }
return 0;
}