#include<iostream>
#include<vector>
using namespace std;
template <typename T>
void display(vector<T> a){
    for(int i=0;i<a.size();i++){
        cout<<"vector["<<i<<"] ="<<a[i]<<endl;
    }
}
int main(void){
    vector<int> myvec(5);
    myvec.assign(5,10);
    display(myvec);
return 0;
}