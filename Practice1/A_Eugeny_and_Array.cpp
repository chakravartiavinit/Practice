#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, a, l, r, c(0), d(0);
    cin >> n >> m;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            c += 1;
        }
        else
        {
            d += 1;
        }
    }
    int up = min(c, d) * 2;
    while (m--)
    {
        cin >> l >> r;
        cout << ((r - l) % 2 == 1 && r - l < up) ? "1" : "0";
        cout << "\n";
    }
    return 0;
}