#include <iostream>

using namespace std;

int evenDisplacements(int n, int arr[]){
    int dp = 0;
    for(int i=0;i<n;i += 2){
        if(!(arr[i] % 2 == 0)) dp++;
    }
    return dp;
}

int oddDisplacements(int n, int arr[]){
    int dp = 0;
    for(int i=1;i<n;i += 2){
        if(!(arr[i] % 2 == 1)) dp++;
    }
    return dp;
}

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        int odp = oddDisplacements(n,arr);
        int edp = evenDisplacements(n,arr);
        if(odp == edp){
            cout << edp << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
