#include <bits/stdc++.h>
using namespace std;
#define mod 1000003
long long Fastexp(long long a, long long b, long long m)
{
    if (a == 1 || b == 0)
    {
        return 1;
    }
    else if (a == 0)
    {
        return 0;
    }
    else if (b == 1)
    {
        return a;
    }
    long long temp = Fastexp(a, b / 2, m);
    if (b % 2 == 0)
    {
        return ((temp % m) * (temp % m)) % m;
    }
    return ((temp % m) * (temp % m) * (a % m)) % m;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, x;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '>')
        {
            x.append("1000");
        }
        else if (s[i] == '<')
        {
            x.append("1001");
        }
        else if (s[i] == '+')
        {
            x.append("1010");
        }
        else if (s[i] == '-')
        {
            x.append("1011");
        }
        else if (s[i] == '.')
        {
            x.append("1100");
        }
        else if (s[i] == ',')
        {
            x.append("1101");
        }
        else if (s[i] == '[')
        {
            x.append("1110");
        }
        else
        {
            x.append("1111");
        }
    }
    reverse(x.begin(), x.end());
    long long ans = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '1')
        {
            ans = (ans + Fastexp(2, i, mod)) % mod;
        }
    }
    cout << ans << "\n";
    return 0;
}