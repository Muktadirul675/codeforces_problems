#include<iostream>
#include<string>
using namespace std;

int main(){
	int a,count=0; string s;
	cin >> a; cin>> s;
	for(int i=0;i<a-1;i++){
		if(s[i] == s[i+1]){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
