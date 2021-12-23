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
        long long n, a, b;
        cin >> n >> a >> b;
        long long beta = n;
        if (a == 0 && b == 0)
        {
            cout << "0\n";
        }
        else if (a > 0 && b > 0)
        {
            long long answer = 0;
            while (n % 2 == 0)
            {
                answer += a;
                n = n / 2;
            }
            if (n > 1 && n % 2 == 1)
            {
                for (int i = 3; i <= sqrt(n); i = i + 2)
                {
                    while (n % i == 0)
                    {
                        answer += b;
                        n = n / i;
                    }
                }
                if (n > 1 && n % 2 == 1)
                {
                    answer += b;
                }
            }
            cout << answer << "\n";
        }
        else if (a == 0)
        {
            if (b > 0)
            {
                long long answer = 0;
                while (n % 2 == 0)
                {
                    n = n / 2;
                }
                if (n > 1 && n % 2 == 1)
                {
                    for (int i = 3; i <= sqrt(n); i += 2)
                    {
                        while (n % i == 0)
                        {
                            answer += b;
                            n = n / i;
                        }
                    }
                }
                cout << answer << "\n";
            }
            else
            {
                if (n % 2 == 0)
                {
                    cout << "0\n";
                }
                else
                {
                    cout << b << "\n";
                }
            }
        }
        else if (b == 0)
        {
            if (a > 0)
            {
                long long answer = 0;
                while (n % 2 == 0)
                {
                    answer += a;
                    n = n / 2;
                }
                cout << answer << "\n";
            }
            else
            {
                if (n % 2 == 0)
                {
                    cout << a << "\n";
                }
                else
                {
                    cout << "0\n";
                }
            }
        }
        else if (a > 0 && b < 0)
        {
            long long answer = 0;
            while (n % 2 == 0)
            {
                answer += a;
                n = n / 2;
            }
            if (n > 1 && n % 2 == 1)
            {
                answer += b;
            }
            if (beta % 2 == 1)
            {
                cout << max(answer, b) << "\n";
            }
            else
            {
                cout << answer << "\n";
            }
        }
        else if (a < 0 && b > 0)
        {
            long long answer = 0;
            for (int i = 3; i <= sqrt(n); ++i)
            {
                while (n % i == 0)
                {
                    answer += b;
                    n = n / i;
                }
            }
            if (n > 1)
            {
                if (n % 2 == 0)
                {
                    answer += a;
                }
                else
                {
                    answer += b;
                }
            }
            if (beta % 2 == 1)
            {
                cout << max(answer, b) << "\n";
            }
            else
            {
                cout << answer << "\n";
            }
        }
        else if (a < 0 && b < 0)
        {
            if (n % 2 == 0)
            {
                cout << a << "\n";
            }
            else
            {
                cout << b << "\n";
            }
        }
    }
}