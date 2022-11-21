#include <iostream>
using namespace std;
string remove_whitespaces(string s){
    char c;
    for(int i = 0 ; i<s.length(); i++){
        c = s[i];
        if(c==32){
            for(int j = i; j < s.length() ;j++){
                s[j] = s[j+1];
            }
        }
    }
}
int main() {
    
    return 0;
}