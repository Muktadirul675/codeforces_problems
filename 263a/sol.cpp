#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int a; cin >> a;
            if(a){x=i+1;y=j+1;}
        }
    }
    int moves = abs(x-3) + abs(y-3);
    cout << moves << endl;
    return 0;
}