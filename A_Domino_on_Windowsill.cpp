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
        int n, k1, k2, black = 0, white = 0;
        cin >> n >> k1 >> k2;
        int arr[3][n + 1];
        int w, b;
        cin >> w >> b;
        int alpha = min(k1, k2);
        int beta = n - max(k1, k2);
        if ((k1 == 1 && k2 != 1) || (k2 == 1 && k1 != 1))
        {
            alpha=min(k1,k2)+k1/2;
            beta=
        }
        else
        {
            if (alpha >= w && beta >= b)
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