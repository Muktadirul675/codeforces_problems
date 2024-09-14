#include<iostream>
using namespace std;

int main(){
    int n,k; cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){cin >> arr[i];}
    int advancePoint = arr[k-1];
    int advancer = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            if(arr[i]>=advancePoint){
                advancer++;
            }
        }
    }
    cout << advancer;
    return 0;
}
