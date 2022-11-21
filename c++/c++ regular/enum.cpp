#include<iostream>
using namespace std;
int main(void){
enum month{
    jan,
    feb,
    mar,
    aprl,
    may,
    jun,
    july,
    aug,
    sep,
    oct,
    nov,
    dec
};
    int i;
   for(int i=jan;i<=dec;i++){
       cout<<i<<" ";
   }  
return 0;
}