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
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a1(n), b1(n);
        vector<int> set_bit_a1(32), set_bit_b1(32);
        map<long long, int> mp1;
        for (int i = 0; i < n; ++i)
        {
            cin >> a1[i];
            for (int j = 0; j < 31; ++j)
            {
                if (a1[i] & (1 << j))
                {
                    set_bit_a1[j]++;
                }
            }
            mp1[a1[i]]++;
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b1[i];
            for (int j = 0; j < 31; ++j)
            {
                if ((b1[i] & (1 << j)))
                {
                    set_bit_b1[j]++;
                }
            }
        }
        int pos = 0;
        vector<int> positions_all;
        for (int i = 31; i >= 0; --i)
        {
            if ((set_bit_a1[i] + set_bit_b1[i]) >= n)
            {
                positions_all.push_back(i);
            }
        }
        debug(pos);
        debug(set_bit_b1);
        debug(set_bit_a1);
        if (positions_all.size() == 0)
        {
            cout << "0 0\n";
        }
        else
        {
            map<int, int> store_answers;
            for (int alpha = 31; alpha >= 0; --alpha)
            {
                vector<int> answer_elem;
                int pos = alpha;
                map<long long, int> mp;
                mp = mp1;
                for (int i = 0; i < a1.size(); ++i)
                {
                    if (a1[i] & (1 << pos))
                    {
                        answer_elem.push_back(a1[i]);
                    }
                }
                for (int j = 0; j < b1.size(); ++j)
                {
                    if (b1[j] & (1 << pos))
                    {
                        answer_elem.push_back(b1[j]);
                    }
                }
                long long ans = -1;
                debug(answer_elem);
                for (auto x : answer_elem)
                {
                    ans = ans & x;
                }
                int count_ele = 0;
                for (auto x : answer_elem)
                {
                    if (mp.find(x) != mp.end() && mp[x] > 0)
                    {
                        count_ele++;
                        mp[x]--;
                    }
                }
                store_answers[ans] = n - count_ele;
            }
            debug(store_answers);
            int MaxAnd = INT_MIN;
            for (auto x : store_answers)
            {
                MaxAnd = max(MaxAnd, x.first);
            }
            cout << MaxAnd << " " << store_answers[MaxAnd] << "\n";
        }
    }
}