#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v1 = {10, 15, 20, 25, 30, 50};
    vector<int> v2 = {30, 5, 15, 80};
    unordered_set<int> st;
    for (auto x : v1)
    {
        st.insert(x);
    }
    for (auto x : v2)
    {
        if (st.count(x))
        {
            cout << x << " ";
        }
    }
    return 0;
}