#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    if(n%2) cout << "NO" << endl;
	    else{
	    	cout << "YES" << endl;
	    	for(int i=1;i<=n;i++){
	    		cout << pow(-1,i) << ' ';
	    	}
	    	cout << endl;
	    }
	}
	return 0;
}
