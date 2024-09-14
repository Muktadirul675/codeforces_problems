#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int arr[3], sum = 0;
        for(int i=0;i<3;i++) {cin >> arr[i]; sum+= arr[i];}
        if(sum == 0){
            cout << 0 << endl;
            continue;
        }
        if(sum % 2 != 0){
            cout << -1 << endl;
            continue;
        }
        for(int i=0;i<3;i++){
            for(int j=i;j<3;j++){
                if(arr[i] > arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int draws = 0;
        int highest = arr[2];
        draws += arr[0];
        arr[2] -= arr[0];
        if(arr[1] > arr[2]) draws += arr[2];
        else draws += arr[1];
        cout << draws << endl;
    }
    return 0;
}
