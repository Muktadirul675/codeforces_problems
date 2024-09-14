#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int suspects = 0,i,j=-1,k, last_one, first_zero, zeros = 0, ones = 0;
        if(s.length() == 1) cout << 1 ;
        else if(s[0] == '0') cout << 1;
        else if(s[s.length()-1] == '1') cout << 1;
        else{
            for(i=0;i<s.length();i++){
                if(s[i] == '1'){
                    j = i;
                }
                if(s[i] == '0') break;
            }
            if(j==-1){
                if(i==s.length()) cout << s.length();
                else cout << i+1;
            }
            else if(i==s.length()){
                cout << i-j;
            }else{
                cout << i-j+1;
            }
        }
        cout << endl;
    }
    return 0;
}
