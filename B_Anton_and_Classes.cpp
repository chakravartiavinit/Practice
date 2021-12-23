#include <bits/stdc++.h>
using namespace std;
const int infinity = 1234567890;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    vector<pair<long long, long long>> p1, p2;
    while (n--)
    {
        long long a, b;
        cin >> a >> b;
        p1.push_back({a, b});
    }
    long long m;
    cin >> m;
    while (m--)
    {
        long long c, d;
        cin >> c >> d;
        p2.push_back({c, d});
    }
    long long minR1 = infinity, maxL1 = -infinity;
    long long minR2 = infinity, maxL2 = -infinity;
    for (int i = 0; i < p1.size(); i++)
    {
        maxL1 = max(maxL1, p1[i].first);
        minR1 = min(minR1, p1[i].second);
    }
    for (int i = 0; i < p2.size(); i++)
    {
        maxL2 = max(maxL2, p2[i].first);
        minR2 = min(minR2, p2[i].second);
    }
    int res = max(maxL2 - minR1, maxL1 - minR2);
    cout << max(0, res) << "\n";

    return 0;
}