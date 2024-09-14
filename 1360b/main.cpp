#include <iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
    int t;cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        sort(arr,arr+n);
        int d = abs(arr[0] - arr[1]);
        for(int j=0;j<n-1;j++){
            int cd = abs(arr[j] - arr[j+1]);
            if(cd<d){
                d = cd;
            }
        }
        cout << d << endl;
    }
    return 0;
}
