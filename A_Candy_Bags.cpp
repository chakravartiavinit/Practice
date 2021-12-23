#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> prs;
    vector<pair<int, int>> maks;
    for (int i = 1; i <= n * n; i++)
    {
        prs.push_back(i);
    }
    for (int i = 0; i < (n * n) / 2; i++)
    {
        maks.push_back(make_pair(prs[i], prs[n * n - 1 - i]));
    }
    for (int i = 0; i < (n * n) / 2; i++)
    {

        cout << maks[i].first << " " << maks[i].second << '\n';
    }
    return 0;
}
