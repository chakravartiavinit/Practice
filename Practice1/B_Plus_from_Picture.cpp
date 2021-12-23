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
bool check(int i, int j, int n, int m, vector<vector<char>> &arr)
{
    if (i - 1 < 0 || arr[i - 1][j] == '.')
    {
        return false;
    }
    if (j - 1 < 0 || arr[i][j - 1] == '.')
    {
        return false;
    }
    if (i + 1 >= n || arr[i + 1][j] == '.')
    {
        return false;
    }
    if (j + 1 >= m || arr[i][j + 1] == '.')
    {
        return false;
    }
    return true;
}
void dfs(int i, int j, int n, int m, vector<vector<char>> &arr, bool &flag)
{
    if (flag == true)
    {
        arr[i][j] = '.';
        if (i - 1 >= 0 && arr[i - 1][j] == '*')
        {
            dfs(i - 1, j, n, m, arr, flag);
        }
        if (i + 1 < n && arr[i + 1][j] == '*')
        {
            dfs(i + 1, j, n, m, arr, flag);
        }
    }
    else
    {
        arr[i][j] = '.';
        if (j - 1 >= 0 && arr[i][j - 1] == '*')
        {
            dfs(i, j - 1, n, m, arr, flag);
        }
        if (j + 1 < m && arr[i][j + 1] == '*')
        {
            dfs(i, j + 1, n, m, arr, flag);
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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (check(i, j, n, m, arr) == true && arr[i][j] == '*')
            {
                vp.push_back({i, j});
            }
        }
    }
    debug(arr);
    debug(vp);
    if (vp.size() != 1)
    {
        cout << "NO\n";
    }
    else
    {
        int start = vp[0].first;
        int end = vp[0].second;
        debug(arr);
        bool flag = true;
        dfs(start, end, n, m, arr, flag);
        flag = false;
        dfs(start, end, n, m, arr, flag);
        debug(arr);
        bool answer = true;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (arr[i][j] == '*')
                {
                    answer = false;
                    break;
                }
            }
            if (answer == false)
            {
                break;
            }
        }
        if (answer == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}