#include <iostream>
#include<algorithm>

using namespace std;

int get_median(int * arr, int l, int r){
    int median, arr_size = r-l;
    if(arr_size % 2 != 0){
        median = *(arr + l + ((arr_size - 1)/2));
    }else{
        int one = *(arr+l+arr_size/2), two = *(arr+l+(arr_size/2+1));
        median = (one + two)/2;
    }
    return median;
}

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr,arr+n);
        for(int i=n-1;i >= 0;i--){
            int x = get_median(arr, i ,n);
            for(int j=i;j<n;j++){
                arr[j] = x;
            }
        }
        cout << arr[0] << endl;
    }
    return 0;
}
