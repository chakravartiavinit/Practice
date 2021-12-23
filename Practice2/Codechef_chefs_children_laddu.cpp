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
        int n, k, mindiff = INT_MAX;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (i + k - 1 < n)
            {
                mindiff = min(mindiff, abs(a[i] - a[i + k - 1]));
            }
        }
        cout << mindiff << "\n";
    }
    return 0;
}