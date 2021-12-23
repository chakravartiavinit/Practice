#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    long long index1 = max(l1, l2);
    long long index2 = min(r1, r2);
    long long ans = index2 - index1 + 1;
    if (index1 <= k && k <= index2)
    {
        ans--;
    }
    if (ans < 0)
    {
        ans = 0;
    }
    cout << ans << "\n";
    return 0;
}