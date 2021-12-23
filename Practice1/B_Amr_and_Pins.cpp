#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;
    double d = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    double ans = ceil(d / (2 * r));
    cout << ans << "\n";
    return 0;
}