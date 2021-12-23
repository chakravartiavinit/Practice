#include <bits/stdc++.h>
using namespace std;
long long query(long l, long r)
{
    if (l == r)
    {
        return -1;
    }
    cout << "? " << l << " " << r << "\n";
    long long x;
    cin >> x;
    return x;
}
void answer(long long a)
{
    cout << "!"
         << " " << a << "\n";
}
int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    long long secmax = query(1, n);
    if (query(1, secmax) == secmax)
    {
        long long high, low, mid;
        low = 1;
        high = secmax;
        while (low < high)
        {
            mid = (high + low + 1) / 2;
            if (query(mid, n) == secmax)
            {
                low = mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        answer(low);
    }
    else
    {
        long long high, low, mid;
        high = n;
        low = secmax;
        while (low < high)
        {
            mid = (high + low) / 2;
            if (query(1, mid) == secmax)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        answer(low);
    }

    return 0;
}