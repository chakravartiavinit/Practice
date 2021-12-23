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
        long long k, n;
        cin >> n >> k;
        if (n % k == 0)
        {
            cout << n / k << " " << k << "\n";
        }
        else
        {
            cout << (n / k) + 1 << " " << n - (k * (n / k)) << "\n";
        }
    }
    return 0;
}