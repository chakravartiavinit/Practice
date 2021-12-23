#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count = 0;
    vector<int> v = {3, 4, 2, 6, 7};
    set<int> st;
    for (int i = 0; i < v.size(); ++i)
    {
        st.insert(v[i]);
    }
    for (int i = 0; i < v.size() - 1; ++i)
    {
        for (int j = i + 1; j < v.size(); ++j)
        {
            int sum = v[i] + v[j];
            if (st.find(sum) != st.end())
            {
                count++;
            }
        }
    }
    cout << count << "\n";

    return 0;
}