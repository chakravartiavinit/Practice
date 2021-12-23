#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1073741824
vector<ll> numDivisors;
void cntDivisors(ll n)
{
    ll cnt = 1;
    ll curr = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                curr++;
                n /= i;
            }
            cnt *= (curr + 1);
            curr = 0;
        }
    }
    if (n > 1)
        cnt *= 2;
    numDivisors.push_back(cnt);
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll ans = 0;
    for (ll i = 1; i <= 1000000; i++)
        cntDivisors(i);
    ll a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                ans = (ans + numDivisors[i * j * k - 1]) % mod;
            }
        }
    }
    cout << ans << endl;
}