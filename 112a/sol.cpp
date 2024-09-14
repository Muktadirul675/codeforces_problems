#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    string first,second; cin>>first >> second;
    transform(first.begin(),first.end(),first.begin(),::tolower);
    transform(second.begin(),second.end(),second.begin(),::tolower);
    int result = strcmp(&first[0],&second[0]);
    if(result==0){cout << 0;}
    else{
        if(result > 0){cout << 1;}else{cout<<-1;}
    }
    cout << endl;
    return 0;
}
