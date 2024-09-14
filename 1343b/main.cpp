#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        int half = n/2;
        if(half%2){
            cout << "NO" << endl;
        }else{
            int firstHalf[half];
            int secondHalf[half];
            int firstHalfFirstElement = 2, firstHalfSum = 0;
            for(int i=0;i<half;i++){
                firstHalf[i] = firstHalfFirstElement;
                firstHalfSum += firstHalfFirstElement;
                firstHalfFirstElement += 2;
            }
            int secondHalfLastElement = 1;
            int secondHalfSum = 0;
            for(int i=0;i<half-1;i++){
                secondHalf[i] = secondHalfLastElement;
                secondHalfSum += secondHalfLastElement;
                secondHalfLastElement += 2;
            }
            int last = firstHalfSum - secondHalfSum;
            secondHalf[half-1] = last;
            cout << "YES" << endl;
            for(int i=0;i<half;i++){
                cout << firstHalf[i] << " ";
            }
            for(int i=0;i<half;i++){
                cout << secondHalf[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
