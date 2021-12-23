#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<pair<int, int>> p1, q1;
    for (int i = 0; i < p; ++i)
    {
        int x, y;
        cin >> x >> y;
        p1.push_back({x, y});
    }
    for (int j = 0; j < q; ++j)
    {
        int x, y;
        cin >> x >> y;
        q1.push_back({x, y});
    }
    int count = 0;
    for (int i = l; i <= r; ++i)
    {
        bool flag = false;
        for (int j = 0; j < p; ++j)
        {
            for (int k = 0; k < q; ++k)
            {
                if (p1[j].first >= q1[k].first + i && p1[j].first <= q1[k].second + i)
                {
                    flag = true;
                }
                if (q1[k].first + i >= p1[j].first && q1[k].first + i <= p1[j].second)
                {
                    flag = true;
                }
            }
        }
        if (flag == true)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}