#include <iostream>

using namespace std;

int inc(int &b)
{
    if((b+1) % 3) b++;
    else b += 2;
    return b;
}

int sum(int a,int b,int c)
{
    return (a+b+c);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool valid = false;
        int a = 1,b=2,c;
        if(n  < 7)
        {
            cout << "NO" << endl;
        }
        else
        {
            while(!valid)
            {
                int ab = a+b;
                if(ab >= n) break;
                c = n-ab;
                if(c % 3 == 0)
                {
                    inc(b);
                    continue;
                }
                if(a == b || b==c || a==c)
                {
                    inc(b);
                    continue;
                }
                if(sum(a,b,c) == n)
                {
                    valid = true;
                }
                else
                {
                    inc(b);
                }
            }
            if(valid)
            {
                cout << "YES\n" << a << ' ' << b << ' ' << c << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
