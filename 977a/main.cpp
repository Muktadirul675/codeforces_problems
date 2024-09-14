#include <iostream>
#include<string>

using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    string num = to_string(n);
    for(int i=0;i<k;i++){
        int number = num[num.size()-1] - '0';
        if(number == 0){
            n /= 10;
            num = to_string(n);
        }else{
            n -= 1;
            num = to_string(n);
        }
    }
    cout << n;
    return 0;
}
