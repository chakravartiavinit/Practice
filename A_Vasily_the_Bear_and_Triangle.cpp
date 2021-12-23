#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long x, y;
    cin >> x >> y;
    int x1, y1, x2, y2;
    if (x > 0 & y > 0)
    {
        x2 = x + y;
        x1 = 0;
        y1 = x + y;
        y2 = 0;
    }
    else if (x > 0 && y < 0)
    {
        x2 = x - y;
        x1 = 0;
        y1 = -(x - y);
        y2 = 0;
    }
    else if (x < 0 & y > 0)
    {
        x1 = -(-x + y);
        x2 = 0;
        y2 = -x + y;
        y1 = 0;
    }
    else if (x < 0 && y < 0)
    {
        x1 = (x + y);
        x2 = 0;
        y2 = (x + y);
        y1 = 0;
    }
    cout << x1 << " " << y1 << " " << x2 << " " << y2;

    return 0;
}