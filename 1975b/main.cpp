#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        int divides_count;
        for(int l=0;l<n;l++){
            for(int j=l+1;j<n;j++){
                divides_count = 0;
                for(int k=0;k<n;k++){
                    if((arr[k] % arr[l] == 0) || (arr[k] % arr[j] == 0)){
                        divides_count++;
                    }else{
                        break;
                    }
                }
                if(divides_count >= n) break;
            }
            if(divides_count >= n) break;
        }
        if(divides_count >= n) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}






















