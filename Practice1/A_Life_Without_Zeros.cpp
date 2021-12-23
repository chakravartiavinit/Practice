#include <bits/stdc++.h>
using namespace std;
long long Remzero(long long a)
{
    int ret = 0;
    int ten = 1;
    while (a)
    {
        int dig = a % 10;
        a /= 10;
        if (dig)
        {
            ret += dig * ten;
            ten *= 10;
        }
    }
    return ret;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b, c;
    cin >> a >> b;
    c = a + b;
    a = Remzero(a);
    b = Remzero(b);
    c = Remzero(c);
    if (a + b == c)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
