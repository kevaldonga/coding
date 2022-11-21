#include<iostream>
#include<vector>
using namespace std;
template <typename T>
void display(vector<T> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<"  ";
        // cout<<vec[i]<<"  ";
    }
}
int main(void){
    vector<int> v1(6,15);
    cout<<"vector is empty condition is "<<v1.empty()<<endl;     // to check if the vector is empty or not 
    // if its empty then it will return 1 as condition became true hence true=1;
    display(v1);
    v1.clear();
    display(v1);   // it will print nothing not even 0 cause size becomes 0
    cout<<v1.capacity();
return 0;
}