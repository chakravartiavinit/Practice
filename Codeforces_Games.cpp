#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, count = 0;
    cin >> n;
    vector<pair<int, int>> team;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        team.push_back(make_pair(a, b));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (team[i].first == team[j].second)
            {
                count++;
            }
        }
    }

    cout << count << "\n";

    return 0;
}