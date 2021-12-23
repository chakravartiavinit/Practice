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
        long long n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;
        if (2 * n <= e)
        {
            cout << n * a << '\n';
        }
        else if (3 * n <= h)
        {
            cout << n * b << '\n';
        }
        else if (n <= e && n <= h)
        {
            cout << n * c << '\n';
        }
        else if (e / 2 >= 1 && e / 2 >= ceil(3 * n - h) / 3)
        {
                }
        else if ((e - n) >= 1 && (e + h) >= 2 * n)
        {
        }
        else if ((h - n) / 2 >= 1 && (h - n) / 2 >= (n - e))
        {
        }
        else if (e >= 3 && h >= 4 && n >= 3)
        {
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}