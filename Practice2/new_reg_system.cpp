#include <bits/stdc++.h>
using namespace std;
void Solve(vector<string> v)
{
    map<string, int> mp;
    for (int i = 0; i < v.size(); ++i)
    {
        if (mp.find(v[i]) != mp.end())
        {
            cout << v[i] << mp[v[i]] << '\n';
        }
        else
        {
            cout << v[i] << "\n";
        }
        mp[v[i]]++;
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> v = {"aba", "ab", "aba", "aba", "ab"};
    Solve(v);
    return 0;
}
