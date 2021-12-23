#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;

    int l = (n + 1) / 2;
    int ans = (l + m - 1) / m * m;
    if (ans > n)
    {
        ans = -1;
    }
    cout << ans << '\n';

    return 0;
}