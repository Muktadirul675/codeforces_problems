#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string s; cin >> s;
    char c = s[0];
    cout <<  char(toupper(c)) << s.substr(1,s.length()-1);
    return 0;
}