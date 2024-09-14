#include <iostream>

using namespace std;

int main()
{
    int a,b; cin >> a >> b;
    int years = 1;
    while(true){
        a = a*3; b= b*2;
        if(a>b){cout << years;break;}else{years++;}
    }
    return 0;
}
