#include<bits/stdc++.h>

using namespace std;

pair<int,int> diff(int h,int m, int th,int tm){
	int hour = 0, minute = 0;
	while(h!=th && m!=tm){
		m++; minute++;
		if(m==60){
			m=0;h++; hour++;
		}
		if(h==24) h = 0;
	}
	pair<int,int> p;
	p.first = hour;
	p.second = minute;
	return p;
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--) {
	    int n,h,m; cin >> n >> h >> m;

	}
	return 0;
}
