#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    char arr[n + 1][m + 1];
    vector<pair<int, int>> alpha;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '*')
            {
                int a = i;
                int b = j;
                alpha.push_back({a, b});
            }
        }
    }
    if (alpha[0].first == alpha[1].first)
    {
        if (alpha[2].second == alpha[0].second)
        {
            cout << alpha[2].first << " " << alpha[1].second << "\n";
        }
        else
        {
            cout << alpha[2].first << " " << alpha[0].second << "\n";
        }
    }
    else if (alpha[1].first == alpha[2].first)
    {
        if (alpha[0].second == alpha[1].second)
        {
            cout << alpha[0].first << " " << alpha[2].second << "\n";
        }
        else
        {
            cout << alpha[0].first << " " << alpha[1].second << "\n";
        }
    }

    return 0;
}