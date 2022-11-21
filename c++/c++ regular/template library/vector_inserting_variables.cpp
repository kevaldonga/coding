#include<iostream>
#include<vector>
using namespace std;
template <typename T>
void display(vector<T> &a){
    static int count=1;
    cout<<"calling display() "<<count<<" times "<<endl;
    for(int i=0;i<a.size();i++){
        cout<<"vector["<<i<<"] ="<<a[i]<<endl;
    }
    count++;
    cout<<endl;
}
int main(void){
    vector<int> myvec(5);
    vector<int> :: iterator myit;
    myit=myvec.begin();
    myvec.assign(5,10);
    display(myvec);
    myvec.insert(myit,100);
    display(myvec);
    myit=myvec.begin();    // it is no longer giving me desired output cause it is not valid have to point it again
    // and this time it will give no error 
    myvec.insert(myit,5,50);
    display(myvec);
return 0;
}