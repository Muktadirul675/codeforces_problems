#include<iostream>

using namespace std;

int main(){
    long int n,m,a; cin >> n >> m >> a;
    long long int vertical,horizontal;
    if(n%a){
        long int toAddVertical = n / a;
        vertical = toAddVertical + 1;
    }else{vertical=n/a;}
    if(m%a){
        long int toAddHorizontal = m / a;
        horizontal = toAddHorizontal + 1;
    }else{
        horizontal = m/a;
    }
    long long multiply = horizontal * vertical;
    // cout << horizontal << vertical << endl;
    cout << multiply << endl;
    return 0;
}
