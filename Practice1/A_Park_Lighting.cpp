#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m, ans;
        cin >> n >> m;
        int alpha = n * m;
        if (alpha % 2 == 0)
        {
            ans = alpha / 2;
        }
        else
        {
            ans = alpha / 2 + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}