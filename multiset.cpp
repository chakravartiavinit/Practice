#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int> ms;
    vector<int> v = {3, 2, 5, 4, 1};
    vector<int> answer;
    answer.push_back(-1);
    ms.insert(v[0]);
    for (int i = 1; i < v.size(); ++i)
    {
        auto it = ms.upper_bound(v[i]);
        if (it != ms.end())
        {
            answer.push_back(*(it));
        }
        else
        {
            answer.push_back(-1);
        }
            ms.insert(v[i]);
    }
    for (int i = 0; i < answer.size(); ++i)
    {
        cout << answer[i] << " ";
    }
    return 0;
}