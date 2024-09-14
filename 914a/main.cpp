#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, highest = -1e6;
    cin >> n;
    int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0;i<n;i++){
    	int num = arr[i], root = sqrt(num);
    	if(root * root != num){
    		if(num>highest) highest = num;
    	}
    }
    cout << highest<< endl;
	return 0;
}
