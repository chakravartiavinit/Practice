#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vt = {1, 2, 3, 6, 7, 8, 9, 1};
    int k = 10;
    map<int, vector<int>> mp;
    for (int i = 0; i < vt.size(); ++i)
    {
        mp[i].push_back(vt[i]);
    }
}
