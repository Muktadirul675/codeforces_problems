#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'B' && s[j+1] == 'G')
            {
                // cout << s[j] << endl;
                s[j] = 'G';
                s[++j] = 'B';
            }
        }
    }
    cout << s << endl;
    return 0;
}
