#include <bits/stdc++.h>
using namespace std;
void Count(vector<int> v)
{
    map<int, int> mp;
    for (int i = 0; i < v.size(); ++i)
    {
        mp[v[i]]++;
    }
    int count = 0;
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        int freq = it->second;
        it->second = count;
        count += freq;
    }
    for(int i=0;i<v.size();++i)
    {
        cout<<mp[v[i]]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {10, 5, 8, 20, 30, 8};
    Count(v);
    return 0;
}