#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s; cin >> s;
    bool dangerous = false;
    char to_match = s[0];
    int consecutive = 0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] == s[i+1])
            consecutive++;
        else
            consecutive = 0;
        if(consecutive == 6) {dangerous = true;break;}
    }
    if(dangerous)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
