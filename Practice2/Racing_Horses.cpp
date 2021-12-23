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
        cin >> n;
        long long arr[n], ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans, arr[i + 1] - arr[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}