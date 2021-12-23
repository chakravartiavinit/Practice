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
void solve(string alpha)
{
    bool flag=false;
    string answer;
    set<string> st;
    for (int i = 100; i <= 999; ++i)
    {
        if (i % 8 == 0)
        {
            string temp = to_string(i);
            st.insert(temp);
        }
    }
    for (auto x : alpha)
    {
        if ((x - '0') % 8 == 0)
        {
            flag = true;
            cout << "YES\n";
            cout << x << "\n";
            return;
        }
    }
    for (int i = 0; i < alpha.length(); ++i)
    {
        for (int j = i + 1; j < alpha.length(); ++j)
        {
            int beta = (alpha[i] - '0') * 10 + (alpha[j] - '0');
            if (beta % 8 == 0)
            {
                flag = true;
                cout << "YES\n";
                cout << beta << "\n";
                break;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    if (flag == false)
    {
        for (auto x : st)
        {
            string t = x;
            int first = -1, second = -1, third = -1;
            for (int i = 0; i < alpha.length(); ++i)
            {
                if (alpha[i] == t[0] && first == -1)
                {
                    first = i;
                }
                else if (alpha[i] == t[1] && i > first && first != -1 && second == -1)
                {
                    second = i;
                }
                else if (second != -1 && i > second && alpha[i] == t[2])
                {
                    answer = x;
                    flag = true;
                    break;
                }
            }
            if (flag == true)
            {
                break;
            }
        }
        if (flag == true)
        {
            cout << "YES\n";
            cout << answer << "\n";
        }
        else
        {
            cout << "NO\n";
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
    string alpha;
    cin >> alpha;
    int zero = 0;
    for (auto x : alpha)
    {
        if (x == '0')
        {
            zero = 1;
            cout << "YES\n";
            cout << "0\n";
            break;
        }
    }
    if (zero == 0)
    {
        if (alpha.length() == 1 || alpha.length() == 2)
        {
            if ((alpha[0] - '0') % 8 == 0)
            {
                cout << "YES\n";
                cout << alpha[0] << "\n";
            }
            else if (alpha.length() == 2 && (alpha[1] - '0') % 8 == 0)
            {
                cout << "YES\n";
                cout << alpha[1] << "\n";
            }
            else
            {
                long long beta = stoll(alpha);
                if (beta % 8 == 0)
                {
                    cout << "YES\n";
                    cout << beta << "\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
        else
        {
            solve(alpha);
        }
    }
}