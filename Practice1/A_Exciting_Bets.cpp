#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long alpha = abs(a - b);
        if (a == b)
        {
            cout << 0 << " " << 0 << "\n";
        }
        else
        {
            if (a > b)
            {
                swap(a, b);
            }
            cout << alpha << " " << min(b % alpha, alpha - b % alpha) << "\n";
        }
    }
}
