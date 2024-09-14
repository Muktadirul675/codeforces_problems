#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    string borze = "";
    int i=0;
    while(i<s.length()){
        if(s[i] == '.'){
            borze += '0';
            i++;
        }else if(s[i] == '-'){
            if(s[i+1] == '.'){
                borze += '1';
            }else{
                borze += '2';
            }
            i += 2;
        }
    }
    cout << borze;
    return 0;
}
