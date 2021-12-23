#include <bits/stdc++.h>
using namespace std;
int diffPossible(const vector<int> &A, int B)
{
    map<int, int> mp;
    set<int> st;
    if (A.size() == 1)
    {
        return 0;
    }
    else
    {
        if (B != 0)
        {
            for (int i = 0; i < A.size(); ++i)
            {
                st.insert(A[i]);
            }
            for (auto x : st)
            {
                if (st.find(B + x) != st.end())
                {
                    return 1;
                }
            }
        }
        else
        {
            for (int i = 0; i < A.size(); ++i)
            {
                mp[A[i]]++;
            }
            for (auto x : mp)
            {
                if (x.second > 1)
                {
                    return 1;
                }
            }
        }
    }

    return 0;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {1, 5, 4, 1, 2};
    int n;
    cin >> n;
    cout << diffPossible(v, n);
    return 0;
}