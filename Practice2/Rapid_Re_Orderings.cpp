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
    int n;
    cin >> n;
    // vi b, v;
    // int x;
    // mii m, ch;
    // fo(i, 2 * n)
    // {
    //     cin >> x;
    //     b.pb(x);
    //     if (m[x] == 0)
    //         v.pb(x);
    //     m[x]++;
    // }
    // sort(all(v));
    // int k = 0;
    // ch[v[0]]++;
    // for (int i = 1; i < v.size(); i++)
    // {
    //     int mm = ceil((i + 1) / 2.0);
    //     ch[v[mm - 1]]++;
    // }
    // k = v.size() - 1;
    // ch[v[k]]++;

    // for (int i = k - 1; i >= 0; i--)
    // {
    //     int mm;
    //     mm = i + ceil((k - i + 1) / 2.0);

    //     ch[v[mm - 1]]++;
    // }

    // for (auto i = m.begin(), j = ch.begin(); i != m.end(); i++, j++)
    // {
    //     if (*i != *j)
    //     {
    //         cout << "-1\n";
    //         return;
    //     }
    //     /* code */
    // }

    // fo(i, v.size())
    // {
    //     cout << v[i] << ' ';
    // }

    // pel;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> original;
        vector<int> vt, v;
        map<int, int> mp, mp1;
        n = 2 * n;
        for (int i = 0; i < n; ++i)
        {
            cin >> vt[i];
            mp[vt[i]]++;
            original.insert(vt[i]);
        }
        for (auto x : original)
        {
            v.push_back(x);
        }
        debug(v);
        int alpha = 0;
        mp1[v[0]]++;
        for (int i = 0; i < original.size(); ++i)
        {
            int temp = ceil((i + 1) / 2.0);
            mp1[v[temp - 1]]++;
        }
        alpha = original.size() - 1;
        mp1[v[alpha]]++;

        for (int i = alpha - 1; i >= 0; i--)
        {
            int temp;
            temp = i + ceil((alpha - i + 1) / 2.0);
            mp1[v[temp - 1]]++;
        }

        bool flag = true;
        for (auto i = mp.begin(), j = mp1.begin(); i != mp.end(); i++, j++)
        {
            if (*i != *j)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            for (auto x : original)
            {
                cout << x << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}