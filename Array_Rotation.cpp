#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long sum = 0;
    long long mod = 1e9 + 7;
    for (int i = 0; i < n; ++i)
    {
        long long t;
        cin >> t;
        sum = (sum + t + mod) % mod;
    }
    int query;
    cin >> query;
    long long ans = sum;
    for (int i = 0; i < query; ++i)
    {
        long long temp;
        cin >> temp;
        ans = ((ans % mod) * (2 % mod)) % mod;
        cout << ans << "\n";
    }
    return 0;
}