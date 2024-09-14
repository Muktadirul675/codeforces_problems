#include <iostream>

using namespace std;

int main()
{
    int x,steps = 0; cin >> x;
    steps += x/5;
    x %= 5;
    steps += x/4;
    x%=4;
    steps += x/3;
    x%=3;
    steps += x/2;
    x%=2;
    steps += x;
    cout << steps << endl;
    return 0;
}
