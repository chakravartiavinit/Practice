#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {1,9,3,10,4,20,2};
    int ans = 0, count;
    unordered_set<int> st;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (st.find(arr[i] - 1) != st.end())
        {
            count = 1;
            while (st.find(arr[i] + count) != st.end())
            {
                count++;
            }
            ans = max(ans, count);
        }
    }
    cout << ans << "\n";
    return 0;
}