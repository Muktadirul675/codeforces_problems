#include<iostream>
using namespace std;
int countLuckydigits(int num)
{
    int lucky, digit;
    lucky=0;
    while(num!=0)
    {
        digit=num%10;
        if(digit==4 || digit==7)
        lucky++;
        num/=10;
    }
return lucky;
}
int main()
{
    int n, luck;
    cin>>n;
    luck=countLuckydigits(n);
    if(luck==4 || luck==7)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}

