#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int arr[n], smallest = -1;
	    int num[101];
	    for (int i = 0; i < 102; ++i)
	    {
	    	num[i] = 0;
	    }
	    for (int i = 0; i < n; i++)
	    {
	    	cin >> arr[i];
	    	num[arr[i]] = num[arr[i]] + 1;
	    }

	    for (int i = 1; i < 102; ++i)
	    {
	    	cout << i << ":" << num[i] << endl;
	    	if(num[i] == 0){
	    		smallest = i;
	    		break;
	    	}
	    }
	    cout << smallest << endl;
	}
	return 0;
}

