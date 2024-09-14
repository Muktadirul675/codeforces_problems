#include<bits/stdc++.h>
using namespace std;

bool isDistinct(int year){
    string year_str = to_string(year);
    for(int i=0;i<year_str.length();i++){
        for(int j=0;j<year_str.length();j++){
            if(i != j){
                if(year_str[i] == year_str[j]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    int year; cin >> year;
    while(true){
        year++;
        if(isDistinct(year)){
            cout << year << endl;
            break;
        }
    }
    return 0;
}
