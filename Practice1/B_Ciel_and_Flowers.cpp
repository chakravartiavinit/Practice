#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long r, g, b;
    cin >> r >> g >> b;
    long long ans = 0;
    for (int i = 0; i < 3; ++i)
    {
        long long alpha = (r - i) / 3 + (g - i) / 3 + (b - i) / 3 + min((r - i) % 3, min((g - i) % 3, (b - i) % 3)) + i;
        ans = max(ans, alpha);
    }
    cout << ans << "\n";

    return 0;
}