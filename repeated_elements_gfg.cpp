#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_set<int> st;
    vector<int> v = {10, 8, 10, 7, 7, 6};
    for (auto x : v)
    {
        if (st.count(x))
        {
            cout << x << " ";
        }
        st.insert(x);
    }
    return 0;
}