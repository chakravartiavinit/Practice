#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n;
    cin >> n;
    if (sqrt(n) == int(sqrt(n)))
    {
        cout << 4 * sqrt(n) << "\n";
    }
    else
    {
        int ans = INT_MAX;
        int m, t, x;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                m = n / i;
                x = i + i + m + m;
                ans = min(ans, x);
            }
        }
        if (ans == INT_MAX)
        {
            cout << 2 + 2 * n << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }

    return 0;
}
