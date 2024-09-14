#include<iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int ar=0;
    for(int i=0;i<n;i++){
        int p,q;
        cin >> p >> q;
        int d = q - p;
        if(d>=2) ar++;
    }
    cout << ar;
    return 0;
}
