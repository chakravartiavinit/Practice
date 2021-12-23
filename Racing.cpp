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
        long long x, r, m;
        cin >> x >> r >> m;
        long long temp = x;
        long long count = 0;
        long long ans = (m - r) * 60 - r * 60 + x;
        if (m < r)
        {
            cout << "NO\n";
        }
        else
        {
            if (ans >= 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}