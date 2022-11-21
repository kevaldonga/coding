#include<iostream>
#include<fstream>
using namespace std;
int main(void){
    string str;
    ofstream out;
    out.open("files_sample.txt");
    out<<"hello from other side ";
    out.close();
    ifstream in;
    in.open("files_sample2.txt");
    // in>>str;
    getline(in,str);
    cout<<"the content in sample file 2 is ---"<<str<<endl;
return 0;
}
/*
    note ->
        -->   default reading function using operands >> can only print one word after it will be terminated.
        -->   getline also has its downsides it will only print one line and as new line is shown it will be terminated.
*/