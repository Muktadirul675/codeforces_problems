#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string hello = "hello";
    int searchFrom = 0;
    int found = 0;
    for(char ch: hello){
        bool letContinue = false;
        for(int i=searchFrom;i<s.length();i++){
            if(s[i] == ch){
                searchFrom = i+1;
                letContinue = true;
                break;
            }
        }
        if(!(letContinue)) break;
    found++;
    }
    if(found == hello.length()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
