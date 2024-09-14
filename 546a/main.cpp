#include <iostream>

using namespace std;

int main()
{
    int k,n,w; cin >> k >> n >> w;
    int totalCost = k * ((w*(w+1))/2);
    if(n>totalCost){cout << 0;}
    else{cout<< (totalCost-n);}
    return 0;
}
