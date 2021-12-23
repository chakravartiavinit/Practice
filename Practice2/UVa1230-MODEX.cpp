#include <bits/stdc++.h>
using namespace std;
long long powermod(long long a, long long b, long long c)
{
    int res = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res = (res * a) % c;
        }
        a = (a * a) % c;
        b /= 2;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (1)
    {
        long long x, y, n;
        cin >> x >> y >> n;

        cout << powermod(x, y, n) << endl;
    }

    return 0;
}
