#include <bits/stdc++.h>
using namespace std;
bool ispower(int n, int base)
{
    if (base % n == 0)
    {
        return true;
    }
    return false;
}
int count(long long a, long long b)
{
    int count = 0;
    while (b > 1)
    {
        b = b / a;
        count++;
    }
    return count;
}
long long Multiply(long long a, long long b)
{
    if (b == 0 || a == 1)
    {
        return 1;
    }
    else if (a == 0)
    {
        return 0;
    }
    long long x = Multiply(a, b / 2);
    if (b % 2 == 0)
    {
        return x * x;
    }
    return x * x * a;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long k, l;
    int ans;
    cin >> k >> l;
    if (ispower(k, l))
    {
        ans = count(k, l);
        if (Multiply(k, ans) == l)
        {
            cout << "YES\n";
            cout << ans - 1 << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}