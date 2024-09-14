#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    double arr[n];
    double totalOrangeVolume = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        totalOrangeVolume += (arr[i]/100);
    }
    double percentage = (totalOrangeVolume / n) * 100;
    cout << percentage << endl;
    return 0;
}
