#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int lc=0,uc=0;
    for(int a:s){
        if(a>=97){lc++;}else{uc++;}
    }
    if(uc>lc){
        for(int i=0;i<s.size();i++){
            int j = s[i];
            if(j >=97){
                s[i] = s[i] - 32;
            }
        }
    }else{
        for(int i=0;i<s.size();i++){
            int j = s[i];
            if(j < 97){
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}
