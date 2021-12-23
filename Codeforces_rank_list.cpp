#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, a, b, count = 0;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == v[k - 1].first && v[i].second == v[k - 1].second)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}