#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {4, 8, 5, 8, 7};
    unordered_set<int> st;
    for (auto x : v)
    {
        if (st.count(x))
        {
            continue;
        }
        else
        {
            cout << x << " ";
            st.insert(x);
        }
    }
    return 0;
}
