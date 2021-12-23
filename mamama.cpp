#include <bits/stdc++.h>
using namespace std;
void lszero(vector<int> A)
{
    vector<int> ans;
    for (int i = 0; i < A.size(); ++i)
    {
        A[i] = A[i - 1] + A[i];
    }
    unordered_map<int, int> mp;
    int answer = -1, first, last;
    for (int i = 0; i < ans.size(); ++i)
    {
        if (mp.find(A[i]) != mp.end())
        {
            if (answer < i - mp[A[i]])
            {
                first = mp[A[i]];
                last = i - mp[A[i]];
                answer = i - mp[A[i]];
                cout << first << "  " << last << '\n';
            }
        }
        else
        {
            mp[ans[i]] = i;
        }
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {1, 2, -2, 4, -4};
    lszero(v);
    return 0;
}