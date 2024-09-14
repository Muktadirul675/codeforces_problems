#include<iostream>
#include<string>
using namespace std;

int charExists(char ch, char * arr,int length){
    for(int i=0;i<length;i++){
        if(*(arr+i) == ch){
            return 1;
        }
    }
    return 0;
}

int main(){
    string s; cin >> s;
    char arr[s.length()];
    int length = 0;
    for(int i=0;i<s.length();i++){
        if(!(charExists(s[i],arr,length))){
            arr[length++] = s[i];
        }
    }
    if(length%2){
        cout << "IGNORE HIM!" << endl;
    }else{cout<<"CHAT WITH HER!"<<endl;}
    return 0;
}