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
        long n, final, ans = 0, temp = 0;
        cin >> n;
        int a[n], c[3] = {0};
        final = n / 3;
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
            c[a[i] % 3]++;
        }
        for (int i = 0; i < 2; i++)
        {
            if (c[0] > final)
            {
                ans += c[0] - final;

                c[1] += c[0] - final;
                c[0] = final;
            }

            if (c[1] > final)
            {
                ans += c[1] - final;

                c[2] += c[1] - final;
                c[1] = final;
            }

            if (c[2] > final)
            {
                ans += c[2] - final;
                c[0] += c[2] - final;
                c[2] = final;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}