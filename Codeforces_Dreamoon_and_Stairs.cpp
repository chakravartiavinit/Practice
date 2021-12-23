#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, r, ans = INT_MAX;
    cin >> n >> m;
    if (n % m != 0)
    {
        cout << "-1"
             << "\n";
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            r = n - 2 * i;
            if ((i + r) % m == 0 && (2 * i + r == n))
            {
                ans = min(ans, i + r);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}