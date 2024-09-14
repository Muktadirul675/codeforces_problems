#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int k=0;k<t;k++){
        int n; cin >> n;
        int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
        int x_index;
        int i;
        i=0;
        while(i != n-1){
            if(arr[i] < arr[i+1]) i++;
            else break;
        }
        if(i == n-1){
            cout << "YES" << endl;
            return 0;
        }
        x_index = i;
        bool possible = true;
        for(int i=0;i<=x_index;i++){
            for(int j=x_index+1;j<n;j++){
                if(arr[i] < arr[j]){
                    possible = false;
                }
            }
        }
        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
