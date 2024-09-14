#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    int currentPassenger = 0;
    int minimumCapacity = 0;
    for(int i=0;i<n;i++){
        int a,b; cin >> a >> b;
        currentPassenger -= a;
        currentPassenger += b;
        if(currentPassenger > minimumCapacity){
            minimumCapacity = currentPassenger;
        }
    }
    cout << minimumCapacity << endl;
    return 0;
}
