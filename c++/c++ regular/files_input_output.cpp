#include<iostream>
#include<fstream>
using namespace std;
int main(void){
    string str;
    ifstream output("files_sample2.txt");       // you can't write in a file and read in a file at same time
    getline(output,str);
    cout<<str;
    ofstream input("files_sample.txt");     // ofstream is to write any lines in a file
    input<<str;
return 0;
}