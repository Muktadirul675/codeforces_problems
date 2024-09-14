#include <iostream>

using namespace std;

void checkIfHard(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        if(a == 1){
            cout << "HARD";
            return ;
        }
    }
    cout << "EASY";
}

int main()
{
    checkIfHard();
    return 0;
}
