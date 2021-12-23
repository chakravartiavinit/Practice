#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        long long arr[n];
        set<long long> st;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        sort(arr, arr + n);
        int flag = -1;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] != i)
            {
                flag = i;
                break;
            }
        }
        if (flag == -1)
        {
            flag = n;
        }
        int newnumber = (flag + arr[n - 1] + 1) / 2;
        if (flag == n || k == 0)
        {
            cout << (int)st.size() + k << "\n";
        }
        else
        {
            st.insert(newnumber);
            cout << (int)st.size() << "\n";
        }
    }
    return 0;
}