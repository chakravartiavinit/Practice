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
vector<int> powers(long long a, int k)
{
    vector<int> p;
    double A = log(a);
    double B = log(k);
    double alpha = ceil(A / B);
    long long beta = pow(k, alpha);
    while (alpha > 0)
    {
        if (a >= beta)
        {
            a -= beta;
            p.push_back(alpha);
        }
        else
        {
            beta /= k;
        }
        alpha--;
    }
    if (a != 0)
    {
        vector<int> tempo = {-1};
        return tempo;
    }
    return p;
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
        int n, k;
        cin >> n >> k;
        vector<long long> vt(n);
        bool flag = true;
        for (int i = 0; i < n; ++i)
        {
            cin >> vt[i];
        }
        map<long long, int> mp1;
        for (int i = 0; i < n; ++i)
        {
            if (vt[i] != 0 && vt[i] != 1 && (vt[i] - 1) % k != 0 && vt[i] % k != 0)
            {
                flag = false;
                break;
            }
            if (vt[i] != 0)
            {
                if (mp1.find(vt[i]) != mp1.end())
                {
                    flag = false;
                    break;
                }
            }
            mp1[vt[i]]++;
        }
        debug(mp1);
        for (auto x : mp1)
        {
            if (x.first != 0 && x.second > 1)
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO\n";
        }
        else
        {
            map<long long, int> mp;
            for (int i = 0; i < n; ++i)
            {
                if (vt[i] > 1)
                {
                    long long alpha = vt[i];
                    double a = log(alpha);
                    double b = log(k);
                    double t = ceil(a / b);
                    long long temp = pow(k, t) * (1LL) * k;
                    debug(temp);
                    while (t >= 0)
                    {
                        debug(temp);
                        if (alpha >= temp)
                        {
                            alpha -= temp;
                            mp[temp]++;
                            temp /= k;
                        }
                        else
                        {
                            temp /= k;
                        }
                        t--;
                    }
                    debug(alpha);
                    if (alpha > 1)
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        mp[alpha]++;
                    }
                }
                if (vt[i] == 1)
                {
                    mp[1]++;
                }
            }
            for (auto x : mp)
            {
                if (x.first != 0 && x.second > 1)
                {
                    flag = false;
                    break;
                }
            }
            debug(mp);
            flag == true ? cout << "YES\n" : cout << "NO\n";
        }
    }
}