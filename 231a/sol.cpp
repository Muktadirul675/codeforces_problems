#include<iostream>

using namespace std;

int main(){
    int n,questionsCanSolve = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        int a = 0;
        for(int j=0;j<3;j++){
            int canSolve; cin >> canSolve;
            if(canSolve == 1){
                a++;
            }
        }
        if(a>=2){questionsCanSolve++;};
    }
    cout << questionsCanSolve << endl; 
    return 0;
}
