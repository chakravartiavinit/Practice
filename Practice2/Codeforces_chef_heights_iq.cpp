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
        int n, count = 0;
        cin >> n;
        int h[n], iq[n];
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> iq[i];
        }
        v[0] = 1;
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            int mx = 0;
            for (int j = 0; j < i; j++)
            {
                if ((h[j] < h[i]) && (iq[j] > iq[i]))
                {
                    mx = max(mx, v[j]);
                }
            }
            v[i] = 1 + mx;
            ans = max(ans, v[i]);
        }

        cout << ans << "\n";
    }
    return 0;
}