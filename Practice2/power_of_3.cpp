#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
using namespace std;

// KKKKKKKKK    KKKKKKK               AAA               LLLLLLLLLLL             IIIIIIIIII        66666666           66666666           66666666
// K:::::::K    K:::::K              A:::A              L:::::::::L             I::::::::I       6::::::6           6::::::6           6::::::6
// K:::::::K    K:::::K             A:::::A             L:::::::::L             I::::::::I      6::::::6           6::::::6           6::::::6
// K:::::::K   K::::::K            A:::::::A            LL:::::::LL             II::::::II     6::::::6           6::::::6           6::::::6
// KK::::::K  K:::::KKK           A:::::::::A             L:::::L                 I::::I      6::::::6           6::::::6           6::::::6
//   K:::::K K:::::K             A:::::A:::::A            L:::::L                 I::::I     6::::::6           6::::::6           6::::::6
//   K::::::K:::::K             A:::::A A:::::A           L:::::L                 I::::I    6::::::6           6::::::6           6::::::6
//   K:::::::::::K             A:::::A   A:::::A          L:::::L                 I::::I   6::::::::66666     6::::::::66666     6::::::::66666
//   K:::::::::::K            A:::::A     A:::::A         L:::::L                 I::::I  6::::::::::::::66  6::::::::::::::66  6::::::::::::::66
//   K::::::K:::::K          A:::::AAAAAAAAA:::::A        L:::::L                 I::::I  6::::::66666:::::6 6::::::66666:::::6 6::::::66666:::::6
//   K:::::K K:::::K        A:::::::::::::::::::::A       L:::::L                 I::::I  6:::::6     6:::::66:::::6     6:::::66:::::6     6:::::6
// KK::::::K  K:::::KKK    A:::::AAAAAAAAAAAAA:::::A      L:::::L         LLLLLL  I::::I  6:::::6     6:::::66:::::6     6:::::66:::::6     6:::::6
// K:::::::K   K::::::K   A:::::A             A:::::A   LL:::::::LLLLLLLLL:::::LII::::::II6::::::66666::::::66::::::66666::::::66::::::66666::::::6
// K:::::::K    K:::::K  A:::::A               A:::::A  L::::::::::::::::::::::LI::::::::I 66:::::::::::::66  66:::::::::::::66  66:::::::::::::66
// K:::::::K    K:::::K A:::::A                 A:::::A L::::::::::::::::::::::LI::::::::I   66:::::::::66      66:::::::::66      66:::::::::66
// KKKKKKKKK    KKKKKKKAAAAAAA                   AAAAAAALLLLLLLLLLLLLLLLLLLLLLLLIIIIIIIIII     666666666          666666666          666666666

#define MOD 1000000007
#define PI 3.141592653589793238462
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

/*########################################### DEBUG ###############################################################################################*/
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(long long t)
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

/*###############################################################################################################################################*/
int tree[400001];
void build(int i, int l, int r, string &alpha)
{
    if (l == r)
    {
        if (alpha[l] == '1')
        {
            tree[i] = 2;
            return;
        }
        else
        {
            tree[i] = 0;
            return;
        }
    }
    int m = (l + r) / 2;
    build(2 * i, l, m, alpha);
    build(2 * i + 1, m + 1, r, alpha);
    tree[i] = (tree[2 * i] + tree[2 * i + 1]) % 3;
}
int query(int i, int l, int r, int qs, int qe)
{
    if (r < qs || qe < l)
    {
        return 0;
    }
    else if (qs <= l && r <= qe)
    {
        return tree[i];
    }
    int m = (l + r) / 2;
    int a = query(2 * i, l, m, qs, qe);
    int b = query(2 * i + 1, m + 1, r, qs, qe);
    return (a + b) % 3;
}
void update(int i, int l, int r, int qs, string &alpha)
{
    if (r < qs || qs < l)
    {
        return;
    }
    else if (qs == l && l == r)
    {
        if (alpha[qs] == '0')
        {
            if (l % 2 == 0)
            {
                tree[i] = 1;
            }
            else
            {
                tree[i] = 2;
            }
        }
        return;
    }
    int m = (l + r) / 2;
    update(2 * i, l, m, qs, alpha);
    update(2 * i + 1, m + 1, r, qs, alpha);
    tree[i] = (tree[2 * i] + tree[2 * i + 1]) % 3;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string alpha;
    cin >> alpha;
    int q;
    cin >> q;
    int n = alpha.length();
    debug(n);
    build(1, 0, n - 1, alpha);
    while (q--)
    {
        int a;
        cin >> a;
        int left, right;
        cin >> left >> right;
        debug(a);
        debug(left);
        debug(right);
        if (a == 0)
        {
            left--;
            right--;
            cout << query(1, 0, n - 1, left, right) << "\n";
        }
        else
        {
            cout << right << "\n";
            update(1, 0, n - 1, left - 1, alpha);
        }
    }
}