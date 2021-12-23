#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<pair<int, int>> v = {{2, 1}, {4, 3}, {6, 5}, {8, 9}, {1, 2}};
    vector<pair<int,int>> alpha;
    int n = 10;
    for (int i = 0; i < v.size(); ++i)
    {
        if(v[i].second%2!=0)
        {
            alpha.push_back({v[i].first,v[i].second});
        }
    }
    for (auto x : alpha)
    {
        cout << x.first << " " << x.second << " ";
    }

    return 0;
}