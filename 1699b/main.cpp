#include<bits/stdc++.h>

using namespace std;

bool state = true;
int arr1[2][2] = {{1,0},{0,1}}, arr2[2][2]={{0,1},{1,0}};
int arr[50][50];

void copy(int i, int j){
	if(state){
		arr[i][j] = arr1[0][0];
		arr[i][j+1] = arr1[0][1];
		arr[i+1][j] = arr1[1][0];
		arr[i+1][j+1] = arr1[1][1];
	}else{
		arr[i][j] = arr2[0][0];
		arr[i][j+1] = arr2[0][1];
		arr[i+1][j] = arr2[1][0];
		arr[i+1][j+1] = arr2[1][1];
	}
	state = !state;
}

int main(){
	int t; cin >> t;
	while(t--) {
	    int n,m; cin >> n >> m;
	    for(int i=0;i<n;i+=2){
	    	bool start = state;
	    	for(int j=0;j<m;j+=2){
	    		copy(i,j);
	    	}
	    	if(start == state){
	    		state = !state;
	    	}
	    }
	    for(int i=0;i<n;i++){
	    	for(int j=0;j<m;j++){
	    		cout << arr[i][j] << ' ';
	    	}
	    	cout << endl;
	    }
	    state = true;
	}
	return 0;
}
