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
        long long n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            cout << n + 2 * k << "\n";
        }
        else
        {
            int dn;
            for (int i = 2; i <= n; ++i)
            {
                if (n % i == 0)
                {
                    dn = i;
                    break;
                }
            }
            cout << n + 2 * (k - 1) + dn << "\n";
        }
    }
    return 0;
}