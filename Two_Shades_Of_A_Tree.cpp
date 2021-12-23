/*  
    Are you Pretest 2 ??
    Because I can't figure out what's wrong with you!

    Author - Coder_ravan
    Rating - Noob(Pupil)
    
*/

#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <math.h>
#include <stack>
#include <list>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <utility>
#define int int64_t
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define vin(x, v)     \
    for (auto &x : v) \
        cin >> x;
#define vout(x, v)   \
    for (auto x : v) \
        cout << x << " ";
#define MEM(a, b) memset(a, (b), sizeof(a))
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define rep(i, j) loop(i, 0, j)
#define rrep(i, j) rloop(i, j, 0)
#define MP make_pair
#define endl "\n"
#define INF (int)1e18
#define EPS 1e-18
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define NEED_FOR_SPEED_MOST_WANTED    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;

/*-----------------------------------D-E-B-U-G-----------------------------------------------*/
#ifndef ONLINE_JUDGE
#define deb(x)         \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define deb(x)
#endif

void _print(int32_t t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.first);
    cerr << ",";
    _print(p.second);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
/*-----------------------------------D-E-B-U-G-----------------------------------------------*/

int a, b;

int west(char x)
{
    if (x == 'S')
        return min(a, 3 * b);
    if (x == 'W')
        return 0;
    if (x == 'N')
        return min(3 * a, b);
    if (x == 'E')
        return min(2 * a, 2 * b);
    return 0;
}

int east(char x)
{
    if (x == 'S')
        return min(3 * a, b);
    if (x == 'W')
        return min(2 * a, 2 * b);
    if (x == 'N')
        return min(a, 3 * b);
    if (x == 'E')
        return 0;
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cin >> a >> b;
    vi v, vv;
    for (auto x : s)
    {
        vv.pb(west(x));
        v.pb(east(x));
    }
    rep(i, n - 1)
    {
        v[i + 1] += v[i];
        vv[i + 1] += vv[i];
    }
    deb(v);
    deb(vv);
    int ans = min(vv.back(), v.back());
    int sum = vv.back();
    rep(i, n)
    {
        ans = min(ans, sum - vv[i] + v[i]);
    }
    cout << ans;
}
signed main()
{
    NEED_FOR_SPEED_MOST_WANTED;
    //#ifndef ONLINE_JUDGE
    //FOR GETTING INPUT FROM input.txt
    //freopen("input.txt", "r", stdin);
    //FOR GETTING INPUT FROM input.txt
    //freopen("output.txt", "w", stdout);
    //	#endif
    int t;
    cin >> t;
    //cin>>t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}