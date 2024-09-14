#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int d[n], a[n];
        for(int i=0;i<n;i++) cin >> d[i];
        a[0] = d[0];
        bool valid = true;
        for(int i=1;i<n;i++){
            int prev = a[i-1], diff = d[i];
            if(diff <= prev && diff !=0){
                valid = false;
                break;
            }
            a[i] = prev + diff;
        }
        if(valid){
            for(int i=0;i<n;i++) cout << a[i] << ' ';
            cout << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
