#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int alpha, alpha2;
    if (n % k == 0)
    {
        alpha = (n / k) * t;
    }
    else
    {
        alpha = (n / k) * t + 1;
    }
    alpha2 = d + t * ((n - (d / t) * k) / (2 * k) + ((n - (d / t) * k) % (2 * k) != 0));
    if (alpha2 < alpha)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}