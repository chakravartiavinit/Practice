#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long y, k, n, p;
    cin >> y >> k >> n;

    p = y + k - (y % k);
    if (p > n)
    {
        cout << "-1\n";
    }
    else
    {
        cout << p - y<<" ";
        for (int i = p + k; i <= n; i = i + k)
        {
            cout << i - y << " ";
        }
    }

    return 0;
}
