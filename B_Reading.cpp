#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> mp;
    vector<int> alpha;
    for (int i = 1; i <= n; ++i)
    {
        int s;
        cin >> s;
        mp.push_back({s, i});
    }
    sort(mp.begin(), mp.end());
    cout << mp[n - k].first << "\n";
    for (int i = n - k; i < n; ++i)
    {
        alpha.push_back(mp[i].second);
    }
    sort(alpha.begin(), alpha.end());
    for (auto y : alpha)
    {
        cout << y << " ";
    }

    return 0;
}