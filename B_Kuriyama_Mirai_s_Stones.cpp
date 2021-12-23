#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    long long pf1[n], pf2[n];
    pf1[0] = arr[0];
    for (int i = 1; i < n; ++i)
    {
        pf1[i] = pf1[i - 1] + arr[i];
    }
    sort(arr, arr + n);
    pf2[0] = arr[0];
    for (int i = 1; i < n; ++i)
    {
        pf2[i] = pf2[i - 1] + arr[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        long long ans;
        int query, l, r;
        cin >> query >> l >> r;
        if (query == 1)
        {
            if (l == 1)
            {
                ans = pf1[r - 1];
            }
            else
            {
                ans = pf1[r - 1] - pf1[l - 2];
            }

            cout << ans << "\n";
        }
        else if (query == 2)
        {
            if (l == 1)
            {
                ans = pf2[r - 1];
            }
            else
            {
                ans = pf2[r - 1] - pf2[l - 2];
            }
            cout << ans << "\n";
        }
    }

    return 0;
}