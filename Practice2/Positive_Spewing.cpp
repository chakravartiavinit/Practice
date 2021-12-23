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
        int n, k;
        cin >> n >> k;
        vector<int> vt(n);
        long long sum = 0;
        long long count_zero = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> vt[i];
            sum += vt[i];
            if (vt[i] == 0)
            {
                count_zero++;
            }
        }
        if (k == 0)
        {
            cout << sum << "\n";
        }
        else if (count_zero == n)
        {
            cout << "0\n";
        }
        else
        {
            bool flag = true;
            long long count = 0;
            for (int test = 1; test <= 1e6; ++test)
            {
                vector<int> temp;
                bool zero_found = false;
                for (int i = 0; i < n; ++i)
                {
                    if (vt[i] > 0)
                    {
                        temp.push_back(i);
                    }
                }
                if (temp.size() == 0)
                {
                    break;
                }
                for (int i = 0; i < temp.size(); ++i)
                {
                    if (temp[i] == 0)
                    {
                        if (vt[temp[i] + 1] == 0)
                        {
                            zero_found = true;
                            count_zero--;
                        }
                        if (vt[n - 1] == 0)
                        {
                            zero_found = true;
                            count_zero--;
                        }
                        vt[temp[i] + 1]++;
                        vt[n - 1]++;
                    }
                    else if (temp[i] == n - 1)
                    {
                        if (vt[temp[i] - 1] == 0)
                        {
                            zero_found = true;
                            count_zero--;
                        }
                        if (vt[0] == 0)
                        {
                            zero_found = true;
                            count_zero--;
                        }
                        vt[temp[i] - 1]++;
                        vt[0]++;
                    }
                    else
                    {
                        if (vt[temp[i] + 1] == 0)
                        {
                            zero_found = true;
                            count_zero--;
                        }
                        if (vt[temp[i] - 1] == 0)
                        {
                            zero_found = true;
                            count_zero--;
                        }
                        vt[temp[i] + 1]++;
                        vt[temp[i] - 1]++;
                    }
                }
                count++;
                if (count == k)
                {
                    break;
                }
                if (zero_found == false)
                {
                    break;
                }
            }
            if (count == k)
            {
                long long sum1 = 0;
                for (int i = 0; i < n; ++i)
                {
                    sum1 += vt[i];
                }
                cout << sum1 << "\n";
            }
            else
            {
                long long answer1 = 0;
                for (int i = 0; i < n; ++i)
                {
                    answer1 += vt[i];
                }
                long long rest = k - count;
                answer1 += 2 * n * (1LL) * rest;
                cout << answer1 << "\n";
            }
        }
    }
}