#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long int n;
    cin >> n;
    int tmp, key;
    int l, r, mid;
    n *= 2;
    for (int i = 1; i <= sqrt(n); i++)
    {
        tmp = i * (i + 1);
        key = n - tmp;
        l = i;
        r = sqrt(n);
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (mid * (mid + 1) < key)
                l = mid + 1;
            else if (mid * (mid + 1) > key)
                r = mid - 1;
            else
            {
                cout << "YES"
                     << "\n";
                return 0;
            }
        }
    }
    cout << "NO"
         << "\n";

    return 0;
}