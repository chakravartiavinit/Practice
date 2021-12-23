#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {10, 5, 5, 10, 2, 2, 2, 3};
    map<int, int> mp;
    for (int i = 0; i < v.size(); ++i)
    {
        mp[v[i]]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}