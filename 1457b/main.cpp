#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int m=n;
	    if(n<2020){
	    	cout << "NO" << endl;
	    }else if(n%2020 == 0){
	    	cout << "YES" << endl;
	    }else if(n%2021 == 0){
	    	cout << "YES" << endl;
	    }else{	
		    while(n%2020 && n>=2021){
		    	n-=2021;
		    }
		    if(n%2020 == 0){
		    	cout << "YES" << endl;
		    }else{
		    	cout << "NO" << endl;
		    }
	    }
	}
	return 0;
}
