#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s; cin >> s;
        if(s.length()<=10){cout << s<<endl;}
        else{
            char first = s[0];
            char last = s[s.length()-1];
            int middle = s.length()-2;;
            cout << first << middle << last << endl;
        }
    }
    return 0;
}
