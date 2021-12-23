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
bool valid_left(int i, int j, int n, int m, int k, vector<string> &vt, int &t1)
{
    int depth = -1;
    queue<pair<int, int>> qp;
    qp.push({i, j});
    while (qp.size() > 0)
    {
        pair<int, int> p1 = qp.front();
        qp.pop();
        if (p1.first >= 0 && p1.second >= 0 && p1.first < n && p1.second < m && vt[p1.first][p1.second] == '*')
        {
            depth++;
            qp.push({p1.first - 1, p1.second - 1});
        }
        else
        {
            break;
        }
    }
    if (depth >= k)
    {
        t1 = depth;
        return true;
    }
    return false;
}
bool valid_right(int i, int j, int n, int m, int k, vector<string> &vt, int &t2)
{
    int depth = -1;
    queue<pair<int, int>> qp;
    qp.push({i, j});
    while (qp.size() > 0)
    {
        pair<int, int> p1 = qp.front();
        qp.pop();
        if (p1.first >= 0 && p1.second >= 0 && p1.first < n && p1.second < m && vt[p1.first][p1.second] == '*')
        {
            depth++;
            qp.push({p1.first - 1, p1.second + 1});
        }
        else
        {
            break;
        }
    }
    if (depth >= k)
    {
        t2 = depth;
        return true;
    }
    return false;
}
void change_left(int i, int j, int n, int m, map<pair<int, int>, bool> &mark, vector<string> &vt, int alpha)
{
    queue<pair<int, int>> qp;
    qp.push({i, j});
    while (qp.size() > 0)
    {
        pair<int, int> p1 = qp.front();
        qp.pop();
        if (p1.first >= 0 && p1.second >= 0 && p1.second < m && p1.first < n && vt[p1.first][p1.second] == '*' && alpha >= 0)
        {
            mark[{p1.first, p1.second}] = true;
            alpha--;
            qp.push({p1.first - 1, p1.second - 1});
        }
        else
        {
            return;
        }
    }
}
void change_right(int i, int j, int n, int m, map<pair<int, int>, bool> &mark, vector<string> &vt, int alpha)
{
    queue<pair<int, int>> qp;
    qp.push({i, j});
    while (qp.size() > 0)
    {
        pair<int, int> p1 = qp.front();
        qp.pop();
        if (p1.first >= 0 && p1.second >= 0 && p1.second < m && p1.first < n && vt[p1.first][p1.second] == '*' && alpha >= 0)
        {
            mark[{p1.first, p1.second}] = true;
            alpha--;
            qp.push({p1.first - 1, p1.second + 1});
        }
        else
        {
            return;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<string> vt;
        for (int i = 0; i < n; ++i)
        {
            string temp;
            cin >> temp;
            vt.push_back(temp);
        }
        map<pair<int, int>, bool> mark;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (vt[i][j] == '*')
                {
                    mark[{i, j}] = false;
                }
            }
        }
        vector<pair<int, int>> vp;
        vector<pair<int, int>> potential;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (vt[i][j] == '*' && (i - 1 >= 0 && j - 1 >= 0 && vt[i - 1][j - 1] == '*') && (i - 1 >= 0 && j + 1 < m && vt[i - 1][j + 1] == '*'))
                {
                    vp.push_back({i, j});
                }
            }
        }
        debug(vp);
        vector<int> value;
        for (int i = 0; i < vp.size(); ++i)
        {
            int t1 = 0, t2 = 0;
            if (valid_left(vp[i].first, vp[i].second, n, m, k, vt, t1) == true && valid_right(vp[i].first, vp[i].second, n, m, k, vt, t2) == true)
            {
                debug(t1);
                debug(t2);
                potential.push_back({vp[i].first, vp[i].second});
                value.push_back(min({t1, t2}));
            }
        }
        debug(potential);
        debug(value);
        for (int i = 0; i < potential.size(); ++i)
        {
            change_left(potential[i].first, potential[i].second, n, m, mark, vt, value[i]);
            change_right(potential[i].first, potential[i].second, n, m, mark, vt, value[i]);
        }
        bool flag_final = true;
        for (auto x : mark)
        {
            if (x.second == false)
            {
                flag_final = false;
                break;
            }
        }
        flag_final == true ? cout << "YES\n" : cout << "NO\n";
    }
}