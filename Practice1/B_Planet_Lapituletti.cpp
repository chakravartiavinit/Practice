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
    map<int, int> mp;
    mp[1] = 1;
    mp[2] = 5;
    mp[8] = 8;
    mp[5] = 2;
    mp[0] = 0;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        string alpha;
        cin >> alpha;
        bool flag = false;
        int hour = (alpha[0] - '0') * 10 + (alpha[1] - '0');
        int minute = (alpha[3] - '0') * 10 + (alpha[4] - '0');
        while (hour < h)
        {
            if (hour == h)
            {
                break;
            }
            string final, hr, mt;
            bool exist = true;
            if (minute == m)
            {
                minute = 0;
                hour++;
            }
            if (hour == 0)
            {
                hr.push_back('0');
                hr.push_back('0');
            }
            else
            {
                if (hour <= 9)
                {
                    hr.push_back('0');
                    hr.push_back(hour + '0');
                }
                else
                {
                    hr = to_string(hour);
                }
            }
            if (minute == 0)
            {
                mt.push_back('0');
                mt.push_back('0');
            }
            else
            {
                if (minute <= 9)
                {
                    mt.push_back('0');
                    mt.push_back(minute + '0');
                }
                else
                {
                    mt = to_string(minute);
                }
            }
            final = hr + ":" + mt;
            string at = final;
            for (int i = 0; i < final.length(); ++i)
            {
                if (final[i] != ':')
                {
                    if (mp.find(final[i] - '0') != mp.end())
                    {
                        final[i] = mp[final[i] - '0'] + '0';
                    }
                }
            }
            for (auto x : final)
            {
                if (x != ':')
                {
                    if (mp.find(x - '0') == mp.end())
                    {
                        exist = false;
                        break;
                    }
                }
            }
            debug(at);
            debug(final);
            if (exist == true)
            {
                int h1 = (final[4] - '0') * 10 + (final[3] - '0');
                int m1 = (final[1] - '0') * 10 + (final[0] - '0');
                int hh1 = (at[0] - '0') * 10 + (at[1] - '0');
                int mm1 = (at[3] - '0') * 10 + (at[4] - '0');
                debug(h1);
                debug(m1);
                if (h1 < h && m1 < m && hh1 < h && mm1 < m)
                {
                    cout << at << "\n";
                    flag = true;
                    break;
                }
            }
            minute++;
        }
        if (flag == false)
        {
            cout << "00:00\n";
        }
    }
}