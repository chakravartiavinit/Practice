#include <bits/stdc++.h>
using namespace std;
bool Comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second > b.second)
    {
        return true;
    }
    else if (a.second == b.second)
    {
        if (a.first < b.first)
        {
            return true;
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {9,9,9,2,5};
    int n = 5;
    map<int, int> mp;
    vector<pair<int, int>> temp;
    vector<int< answer;
    for (int i = 0; i < n; ++i)
    {
        mp[arr[i]]++;
    }
    for (auto x : mp)
    {
        temp.push_back({x.first, x.second});
    }

    sort(temp.begin(), temp.end(), Comp);
    for (auto x : temp)
    {
        for (int i = 0; i < x.second; ++i)
        {
            answer.push_back(x.first);
        }
    }
    return 0;
}
