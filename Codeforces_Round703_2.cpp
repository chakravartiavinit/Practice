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
        long long n, ans;
        cin >> n;
        vector<long long> x(n);
        vector<long long> y(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        if (n % 2 == 1)
        {
            cout << "1"
                 << "\n";
        }
        else
        {

            sort(x.begin(), x.end());
            sort(y.begin(), y.end());
            ans = (x[n / 2] - x[n / 2 - 1] + 1) * (y[n / 2] - y[n / 2 - 1] + 1);
            cout << ans << "\n";
        }
    }
    return 0;
}
