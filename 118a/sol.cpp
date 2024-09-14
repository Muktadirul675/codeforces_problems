#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int isVowel(char ch){
    char vowels[6] = {'a', 'o', 'y', 'e', 'u', 'i'};
    for(int i=0;i<6;i++){
        if(vowels[i]==ch){return 1;}
    }
    return 0;
}

string emmitVowel(string s){
    string str = "";
    for(char c : s){
        if(!(isVowel(c))){str.push_back(c);}
    }
    return str;
}

int main(){
    string s; cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string s2 = emmitVowel(s);
    string s3 = "";
    for(char c:s2){
        s3.push_back('.');
        s3.push_back(c);
    }
    cout << s3 << endl;
    return 0;
}