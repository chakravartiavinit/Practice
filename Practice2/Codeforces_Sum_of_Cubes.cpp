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
        int flag = 0;
        long long x, l, r, mid, temp;
        cin >> x;
        for (long long i = 1; i <= cbrt(x); i++)
        {
            temp = x - i * i * i;
            l = i;
            r = cbrt(x);
            mid = l + r / 2;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if ((mid * mid * mid) < temp)
                {
                    l = mid + 1;
                }
                else if ((mid * mid * mid) > temp)
                {
                    r = mid - 1;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}