#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, count = 0;
    cin >> n >> k;
    int i = 0;
    long long a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i<n, k> 0; i++)
    {
        if (a[i] < 0)
            a[i] *= -1, k--;
        else
            break;
    }

    sort(a, a + n);

    if (k > 0)
    {
        if (k % 2)
            a[0] *= -1;
    }

    long long ans = accumulate(a, a + n, 0);

    cout << ans;
    return 0;
}