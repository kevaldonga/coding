#include<iostream>
#include<vector>
using namespace std;
template<typename T>
    void display(vector<T> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i);
    }
    cout<<endl;
}
int main(void){
    vector<char> s{'k','e','v','a','l'};
    display(s);
    s.push_back('l');
    display(s);
    s.pop_back();
    s.pop_back();
    display(s);
return 0;
}