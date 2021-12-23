#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '1')
            {
                mp[i + 1]++;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= 7; ++i)
    {
        ans = max(ans, mp[i]);
    }
    cout << ans << "\n";
    return 0;
}