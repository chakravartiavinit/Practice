#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    vector<pair<int, int>> vp;
    for (int i = x; i >= 0; i--)
    {
        for (int j = y; j >= 0; j--)
        {
            if (i >= a && j >= b && i > j)
            {
                vp.push_back({i, j});
            }
        }
    }
    cout << vp.size() << "\n";
    sort(vp.begin(), vp.end());
    for (auto x : vp)
    {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}