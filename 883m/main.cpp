#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2>>y2;
    int x2dir=1, y2dir=1;
    if(x2 < x1){
        x2dir = -1;
    }else x2dir = 1;
    if(y2<y1){
        y2dir = -1;
    }else y2dir = 1;
    // int x2mark = x2/abs(x2), y2mark = y2/abs(y2);
    x2 += x2dir, y2 += y2dir;
    int dx, dy;
    if((x1<0 && x2<0) || (x1>=0 && x2>=0)){
        dx = abs(abs(x1)-abs(x2));
    }else{
        dx = abs(abs(x1)+abs(x2));
    }
    if((y1<0 && y2<0) || (y1>=0 && y2>=0)){
        dy = abs(abs(y1)-abs(y2));
    }else{
        dy = abs(abs(y1)+abs(y2));
    }
    x2 -= x2dir, y2 -= y2dir;
    int extra = 0;
    if(x1==x2) extra+= 2;
    if(y1==y2) extra+=2;
    cout << 2*(dx+dy) + extra << endl;
    return 0;
}
