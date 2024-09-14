#include <iostream>

using namespace std;

int main()
{
    int x=0,y=0,z=0,n;cin >> n;
    int vectors[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int co ; cin >> co;
            vectors[i][j] = co;
        }
        x += vectors[i][0];
        y += vectors[i][1];
        z += vectors[i][2];
    }
    if(x || y || z)
        cout << "NO" ;
    else
        cout << "YES" ;
    return 0;
}
