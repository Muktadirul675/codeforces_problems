#include <iostream>

using namespace std;



int main()
{
    int t; cin >> t;
    for(int i=0;i<t;i++){
        int n; cin >> n;
        int arr[n], weight = 0,ones=0,twos=0;
        for(int j=0;j<n;j++){
            int num; cin >> num;
            arr[j] = num;
            weight += num;
            if(num == 1) ones++;
            if(num == 2) twos++;
        }
        if(weight % 2 == 1){
            cout << "NO" << endl;
            continue;
        }else{
            int aw = 0, bw = 0;
            int initialOnes = ones, initialTwos = twos;
            if(ones % 2 == 1){
                ones = 1;
            }else{
                ones = 0;
            }
            if(twos % 2 == 1){
                twos = 1;
            }else{
                twos = 0;
            }
            if(ones){
                cout << "NO" << endl;
            }else if(twos){
                if(initialOnes){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
