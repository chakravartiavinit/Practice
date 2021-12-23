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
bool check(string beta)
{
    bool flag = true;
    if (beta[0] < '0' && beta[0] > '9')
    {
        return false;
    }
    else if (beta[1] < '0' || beta[1] > '9')
    {
        return false;
    }
    else if (beta[2] != '-')
    {
        return false;
    }
    else if (beta[3] < '0' || beta[3] > '9')
    {
        return false;
    }
    else if (beta[4] < '0' || beta[4] > '9')
    {
        return false;
    }
    else if (beta[5] != '-')
    {
        return false;
    }
    else if (beta[6] < '0' || beta[6] > '9')
    {
        return false;
    }
    else if (beta[7] < '0' || beta[7] > '9')
    {
        return false;
    }
    else if (beta[8] < '0' || beta[8] > '9')
    {
        return false;
    }
    else if (beta[9] < '0' || beta[9] > '9')
    {
        return false;
    }
    int gamma = (beta[6] - '0') * 1000 + (beta[7] - '0') * 100 + (beta[8] - '0') * 10 + (beta[9] - '0');
    if (gamma < 2013 || gamma > 2015)
    {
        return false;
    }
    int delta = (beta[0] - '0') * 10 + (beta[1] - '0');
    if (delta < 1)
    {
        return false;
    }
    int x = (beta[3] - '0') * 10 + (beta[4] - '0');
    if (x == 2)
    {
        if (delta >= 29)
        {
            return false;
        }
    }
    else if (x == 2 || x == 4 || x == 6 || x == 9 || x == 11)
    {
        if (delta == 31)
        {
            return false;
        }
    }
    return true;
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
    map<string, int> mp;
    for (int i = 0; i < alpha.length(); ++i)
    {
        string temp;
        if (alpha[i] == '-')
        {
            if (i - 2 >= 0)
            {
                temp.push_back(alpha[i - 2]);
            }
            if (i - 1 >= 0)
            {
                temp.push_back(alpha[i - 1]);
            }
            temp.push_back(alpha[i]);
            int count = 0;
            for (int j = i + 1; j < alpha.length(); ++j)
            {
                count++;
                temp.push_back(alpha[j]);
                if (count == 7)
                {
                    break;
                }
            }
            debug(temp);
            if (check(temp) == true)
            {
                mp[temp]++;
            }
        }
    }
    int Max = 0;
    for (auto x : mp)
    {
        Max = max(Max, x.second);
    }
    for (auto x : mp)
    {
        if (x.second == Max)
        {
            cout << x.first << "\n";
            break;
        }
    }
}