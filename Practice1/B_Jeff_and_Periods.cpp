#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> mp, mp1;
    set<int> st;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        st.insert(v[i]);
        mp1[v[i]]++;
    }
    for (auto x : st)
    {
        if (mp1[x] == 1)
        {
            mp[x] = 0;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (mp1[v[i]] != 1)
        {
            if (mp.find(v[i]) != mp.end())
            {
                mp[v[i]] = i - mp[v[i]];
            }
            else
            {
                mp[v[i]] = i;
            }
        }
    }
    cout << mp.size() << "\n";
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << " \n";
    }
    return 0;
}