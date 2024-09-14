#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a,b,n,c=0; cin >> a >> b >> n;
		int tools[n], tool = 0;
		for(int i=0;i<n;i++) cin >> tools[i];
		while(1){
			c++;
			if(b == 1){
				if(tool < n) b+=min(tools[tool++],a);
			}
			if(b==0) break;
			b--;
		}
		cout << c-- << endl;
	}
	return 0;
}