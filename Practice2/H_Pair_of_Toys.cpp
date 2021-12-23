#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define ff first
#define ss second
#define pq priority_queue
#define umap unordered_map
typedef string str;
typedef long long ll;
typedef double ld;
#define tol(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define tou(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define size(s) (ll) s.size()
typedef vector<char> vc;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef pair<pii, int> piii;
const ll MOD = 1e9 + 7, INF = 2e18;
const ld PI = 3.141592653589793;
ll seiveSize = 0, factorialSize = 3e5 + 5;
vector<bool> seive(seiveSize + 1, 1);
vi fact(factorialSize + 1, 1);
void eSeive(ll n = seiveSize)
{
    for (ll i = 4; i <= n; i += 2)
        seive[i] = 0;
    for (ll i = 3; i <= n; i += 2)
        for (ll j = i * i; j <= n; j += i)
            seive[j] = 0;
}
void facto(ll n = factorialSize)
{
    for (ll i = 2; i <= n; i++)
        fact[i] = (fact[i - 1] * i) % MOD;
}
ll exp(ll n, ll k, ll m = MOD)
{
    ll r = 1, a = n % m;
    do
    {
        r = k & 1 ? r * a % m : r;
        a = a * a % m;
    } while (k /= 2);
    return r;
}
ll imod(ll a, ll m = MOD) { return exp(a, m - 2, m) % m; }
ll nCr(ll n, ll r, ll m = MOD) { return r ? (fact[n] * imod(fact[r], m) % m * imod(fact[n - r], m) % m) % m : 1; }
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int power(int x, int p)
{
    if (p == 0)
        return 1;
    if (!(1 & p))
        return power(x, p / 2) * power(x, p / 2);
    else
        return x * power(x, p / 2) * power(x, p / 2);
}

void solve()
{
    int n;
    cin >> n;
    vpii a(n);
    mii c1, c2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].ff >> a[i].ss;
        c1[a[i].ff]++;
        c2[a[i].ss]++;
    }
    // nC3
    int ans = n * (n - 1) * (n - 2) / 6;
    for (int i = 0; i < n; i++)
    {
        ans -= (c1[a[i].ff] - 1) * (c2[a[i].ss] - 1);
    }
    cout << ans << endl;
}

signed main()
{
    fast;
    // cout<<setprecision(12)<<fixed;
    int _t = 1;
    cin >> _t;
    while (_t--)
        solve();
    return 0;
}