#include<iostream>
#include<fstream>
using namespace std;
int main(void){
    ifstream in;
    string str;
    in.open("files_sample2.txt");
    while(in.eof()==0){
        getline(in,str);
        cout<<str<<endl;
    }
return 0;
}