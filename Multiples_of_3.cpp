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
const int N = 100000;
struct node
{
    int first;
    int second;
};
node tree[4 * N + 1];
int lazy[4 * N + 1];
void build(int index, int l, int r)
{
    if (l == r)
    {
        tree[index].first = 0;
        tree[index].second = 0;
        return;
    }
    int m = (l + r) / 2;
    build(2 * index, l, m);
    build(2 * index + 1, m + 1, r);
    tree[index].first = tree[2 * index].first + tree[2 * index + 1].first;
}
void update(int index, int l, int r, int qs, int qe, int val)
{
    if (lazy[index] != 0)
    {
        if (l != r)
        {
            tree[index].first += lazy[index];
            lazy[2 * index] += lazy[index];
            lazy[2 * index + 1] += lazy[index];
            if (tree[index].first % 3 == 0)
            {
                tree[index].second++;
            }
        }
        lazy[index] = 0;
    }
    if (r < qs || qe < l)
    {
        return;
    }
    else if (qs <= l && r <= qe)
    {
        tree[index].first += val;
        if (tree[index].first % 3 == 0)
        {
            tree[index].second++;
        }
        if (l != r)
        {
            lazy[2 * index] += val;
            lazy[2 * index + 1] += val;
        }
        return;
    }
    int m = (l + r) / 2;
    update(2 * index, l, m, qs, qe, val);
    update(2 * index + 1, l, m, qs, qe, val);
    tree[index].first = tree[2 * index].first + tree[2 * index + 1].first;
    if (tree[index].first % 3 == 0)
    {
        tree[index].second++;
    }
}
int query(int index, int l, int r, int qs, int qe)
{
    if (lazy[index] != 0)
    {
        if (l != r)
        {
            tree[index].first += lazy[index];
            lazy[2 * index] += lazy[index];
            lazy[2 * index + 1] += lazy[index];
            if ((tree[index].first) % 3 == 0)
            {
                tree[index].second++;
            }
        }
        lazy[index] = 0;
    }
    if (r > qs || qe < l)
    {
        return 0;
    }
    else if (qs <= l && qe >= r)
    {
        return tree[index].second;
    }
    int m = (l + r) / 2;
    int alpha = query(2 * index, l, m, qs, qe);
    int beta = query(2 * index + 1, m + 1, r, qs, qe);
    return (alpha + beta);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int type, start, end;
        cin >> type >> start >> end;
        if (type == 0)
        {
            update(1, 0, n - 1, start, end, 1);
        }
        else
        {
            cout << query(1, 0, n - 1, start, end) << "\n";
        }
    }
}