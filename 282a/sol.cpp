#include<iostream>
using namespace std;

int main(){
    int n,x=0;
    cin >> n;
    for(int i=0;i<n;i++){
        string st;cin>>st;
        if(st[0]=='X'){
            if(st[1]=='+' && st[2]=='+'){x++;}
            if(st[1]=='-' && st[2]=='-'){x--;}
        }
        if(st[2]=='X'){
            if(st[0]=='+' && st[1]=='+'){x++;}
            if(st[0]=='-' && st[1]=='-'){x--;}
        }
    }
    cout << x << endl;
    return 0;
}