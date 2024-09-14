#include <iostream>
#include<algorithm>
using namespace std;

void swap(int *first, int *second){
    int store = *first;
    *first = *second;
    *second = store;
}

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n,k; cin >> n >> k;
        int a[n], b[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        for(int j=0;j<n;j++){
            cin >> b[j];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int j=0;j<k;j++){
            if(a[j] < b[j]) swap(a[j],b[j]);
        }
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += a[j];
        }
        cout << sum << endl;
    }
    return 0;
}
