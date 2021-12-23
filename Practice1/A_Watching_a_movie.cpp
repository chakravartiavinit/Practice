#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long sum = 0;
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> l;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        l.push_back({a, b});
    }
    sum += (l[0].first - 1) % x + (l[0].second - l[0].first + 1);
    int alpha = l[0].second + 1;
    for (int i = 1; i < n; ++i)
    {
        sum += (l[i].second - l[i].first + 1) + (l[i].first - alpha) % x;
        alpha = l[i].second + 1;
    }
    cout << sum << "\n";

    return 0;
}