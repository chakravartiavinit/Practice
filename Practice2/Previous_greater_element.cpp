#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {15, 10, 18, 12, 4, 6, 2, 8}, n = 7;
    stack<int> st;
    st.push(arr[0]);
    cout<<"-1 ";
    for (int i = 1; i < n; i++)
    {
        while (st.empty() == false && st.top() <= arr[i])
        {
            st.pop();
        }
        int pg = (st.empty()) ? -1 : st.top();
        cout << pg << " ";
        st.push(arr[i]);
    }
    return 0;
}