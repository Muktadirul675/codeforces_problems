#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>

using namespace std;

struct Point
{
    int x;
    int y;
};

typedef struct Point point;

double getY(double x1, double y1, double x2, double y2, double x)
{
    double a = (double)x - x1;
    double d = (double)y1 - y2;
    double b = (double)x1 - x2;
    double y = (double)((a * d) / b) + y1;
    return y;
}

vector<pair<point, point>> pointsApproved(vector<point> heightsList)
{
    // cout << "iniatializing" << endl;
    int heighestIndex = 0;
    point heighest = heightsList[heighestIndex];
    for (int i = 1; i < heightsList.size(); i++)
    {
        // cout << "Compare height: " << heighest.y << " " << heightsList[i].y << endl;
        if (heighest.y < heightsList[i].y)
        {
            heighest = heightsList[i];
            heighestIndex = i;
        }
    }
    vector<pair<point, point>> approved;
    for (int i = 0; i < heightsList.size(); i++)
    {
        if (i != heighestIndex)
        {
            point p = heightsList[i];
            double x1, y1, x2, y2;
            x1 = p.x;
            y1 = p.y;
            x2 = heighest.x;
            y2 = heighest.y;
            // printf("Point %d; x : %d, y : %d\n",i,x1,y1);
            bool approvedBool = true;
            for (int j = 0; j < heightsList.size(); j++)
            {
                int x = j;
                double y = getY(x1, y1, x2, y2, x);
                double ytoCompare = heightsList[x].y;
                // printf("x %d y %f ytoc %f \n",x,y,ytoCompare);
                if (y < ytoCompare)
                {
                    approvedBool = false;
                    break;
                }
            }
            if (approvedBool)
            {
                pair<point, point> pairPoint(p, heighest);
                approved.push_back(pairPoint);
            }
        }
    }
    return approved;
}

double getArea(point p1, point p2, int n)
{
    double x1 = 0, y1 = getY(p1.x, p1.y, p2.x, p2.y, x1);
    double x2 = 0, y2 = 0;
    double x3 = n, y3 = 0;
    double x4 = n, y4 = getY(p1.x, p1.y, p2.x, p2.y, x4);
    double area = (1.0 / 2.0) * ((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1) - (x2 * y1 + x3 * y2 + x4 * y3 + x1 * y4));
    return area;
}

int main()
{
    int n;
    cin >> n;
    vector<point> prevHeights;
    vector<point> newHeights;
    for (int i = 0; i < n; i++)
    {
        double height;
        cin >> height;
        point p;
        p.x = i;
        p.y = height;
        prevHeights.push_back(p);
    }
    for (int i = 0; i < n; i++)
    {
        double height;
        cin >> height;
        point p;
        p.x = i;
        p.y = height;
        newHeights.push_back(p);
    }

    vector<point> functionList = prevHeights;
    for (int i = 0; i < n; i++)
    {
        functionList[i] = newHeights[i];
        vector<pair<point, point>> list = pointsApproved(functionList);
        pair<point, point> approvedPair = list[0];

        for (int i = 0; i < list.size(); i++)
        {
            if (getArea(approvedPair.first, approvedPair.second, n - 1) > getArea(list[i].first, list[i].second, n - 1))
            {
                approvedPair = list[i];
            }
        }

        double y0 = getY(approvedPair.first.x, approvedPair.first.y, approvedPair.second.x, approvedPair.second.y, 0);
        double y1 = getY(approvedPair.first.x, approvedPair.first.y, approvedPair.second.x, approvedPair.second.y, n - 1);

        cout << setprecision(12) << y0 + y1 << " ";
    }

    return 0;
}
