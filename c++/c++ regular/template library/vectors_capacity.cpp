#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);  // size will be displayed as 3 but memory allocated for vector will 4 cause whenever you enter variable when size 
    // is reached memory allocated for vector will be doubled 
    // or I would say it will shift its data to new bigger size vector and old will be dumped 
    cout<<"the size of your vector is "<<vec.size()<<endl;
    cout<<"the capacity of your vector is "<<vec.capacity()<<endl;
return 0;
}