#include<iostream>

using namespace std;

int main(){
    int w;cin >> w;
    int approved = 0;
    for(int i=1;i<w;i++){
        int a = i;
        int b = w-i;
        if(a%2 == 0 && b%2 == 0){approved = 1;break;}
    }
    if(approved){cout << "YES" << endl;}else{cout << "NO" << endl;}
    return 0;
}

