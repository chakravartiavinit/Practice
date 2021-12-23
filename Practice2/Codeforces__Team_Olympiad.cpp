#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, ans = INT_MAX;
    cin >> n;
    int a[n], b[3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i] - 1]++;
    }
    ans = min(b[0], min(b[1], b[2]));
    cout << ans << "\n";

    return 0;
}
