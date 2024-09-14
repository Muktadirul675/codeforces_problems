#include <iostream>

using namespace std;

int b_search(int arr[],int len, int num){
    int low=0,high=len-1,mid;
    while(low <= high){
        mid = (low+high) /2;
        if(arr[mid] == num){
            return len - mid;
        }
        if(arr[mid] > num){
            low = mid+1;
        }else if(arr[mid] < num){
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
        int alice[n], bob[n], total = 0;
        alice[0] = arr[0];
        bob[n-1] = arr[n-1];
        for(int i=1;i<n;i++) alice[i] = alice[i-1] + arr[i];
        for(int i=n-2;i>=0;i--) {
            bob[i] = bob[i+1] + arr[i];
        }
        for(int i=0;i<n;i++){
            int num = alice[i], index = b_search(bob, n, num);
            if(index != -1){
                int t = index+i+1;
                if(t <= n && t > total) total = t;
            }
        }
        cout << total << endl;
    }
    return 0;
}
