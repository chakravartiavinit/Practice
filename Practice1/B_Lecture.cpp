#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < m; ++i)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    vector<string> sample, ans;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        sample.push_back(s);
    }
    for (int i = 0; i < n; ++i)
    {
        string a, b;
        a = mp[sample[i]];
        b = sample[i];
        if (a.length() > b.length())
        {
            ans.push_back(b);
        }
        else
        {
            if (a.length() < b.length())
            {
                ans.push_back(a);
            }
            else
            {
                ans.push_back(sample[i]);
            }
        }
    }
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }

    return 0;
}