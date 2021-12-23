#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << "YES\n";
        }
        else
        {
            if (x >= 4)
            {
                cout << "YES\n";
            }
            else
            {
                if (x == 1)
                {
                    if (y > 1)
                    {
                        cout << "NO\n";
                    }
                    else
                    {
                        cout << "YES\n";
                    }
                }
                else if (x == 2)
                {
                    if (y > 3)
                    {
                        cout << "NO\n";
                    }
                    else
                    {
                        cout << "YES\n";
                    }
                }
                else if (x == 3)
                {
                    if (y > 3)
                    {
                        cout << "NO\n";
                    }
                    else
                    {
                        cout << "YES\n";
                    }
                }
            }
        }
    }
}