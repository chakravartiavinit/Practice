#include <bits/stdc++.h>
using namespace std;
long long Fastpow(long long a, long long b, long long c)
{
    if (b == 1)
    {
        return a;
    }
    else if (a == 0)
    {
        return 0;
    }
    else if (a == 1 || b == 0)
    {
        return 1;
    }
    long long temp = Fastpow(a, b / 2, c);
    if (b % 2 == 0)
    {
        return ((temp % c) * (temp % c)) % c;
    }
    return ((temp % c) * (temp % c) * (a % c)) % c;
}
bool check(long x, long p)
{
    for (int i = 1; i < p - 1; ++i)
    {
        if (Fastpow(x, i, p) == 1)
        {
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n;
    cin >> n;
    long count = 0;
    for (int i = 1; i < n; ++i)
    {
        if (check(i, n) == true)
        {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}