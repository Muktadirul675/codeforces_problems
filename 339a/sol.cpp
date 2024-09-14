#include<iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int arrLength = (s.length()+1)/2;
    int arr[arrLength],arrIndex=0;
    for(int i=0;i<s.length();i+=2){
        arr[arrIndex++] = s[i] - '0'; 
    }
    for(int i=0;i<arrLength;i++){
        for(int j=0;j<arrLength;j++){
            if(arr[i] < arr[j]){
                int store = arr[i];
                arr[i] = arr[j];
                arr[j] = store;
            }
        }
    }
    for(int i=0;i<arrLength;i++){
        if(i!=0){
            cout << '+';
        }
        cout << arr[i];
    }
    cout << endl;
    return 0;
}