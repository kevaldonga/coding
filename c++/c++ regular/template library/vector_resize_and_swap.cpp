#include<iostream>
#include<vector>
using namespace std;
template<typename T>
    void display(vector<T> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<endl;
    }
    cout<<endl;
}
int main(void){
    vector<string> v1(5,"hello");
    display(v1);
    v1.resize(3);
    v1.resize(6,"hii");
    display(v1);
    vector<string> v2(4,"its me");
    v2.swap(v1);
    cout<<"displaying vector v1 "<<endl;
    display(v1);
    cout<<"displaying vector v2 "<<endl;
    display(v2);
return 0;
}