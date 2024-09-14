#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int i ;
        for(i=s.length()-1;s[i] == '0'; i--);
        cout << s.substr(0,i) << endl;
    }
    return 0;
}
