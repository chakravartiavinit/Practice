#include <bits/stdc++.h>
using namespace std;
bool check(long long n, long long m)
{
    if (n == 0 || m == 0)
    {
        return true;
    }
    return false;
}
void Ans(long long &n, long long &m)
{
    if (check(n, m) == true)
    {
        return;
    }
    if (n >= 2 * m)
    {
        n = n - ((n / m) - 1) * m;
        Ans(n, m);
    }
    else if (m >= 2 * n)
    {
        long long temp = ((m / n) - 1) * n;
        m = m - temp;
        Ans(n, m);
    }
    return;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m;
    cin >> n >> m;
    Ans(n, m);
    cout << n << " " << m;
    return 0;
}