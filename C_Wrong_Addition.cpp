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
bool check(string alpha, string beta, string gamma)
{
    int i = alpha.length() - 1;
    int j = beta.length() - 1;
    string temp;
    while (i >= 0 && j >= 0)
    {
        int m = (alpha[i] - '0') + (beta[j] - '0');
        string x = to_string(m);
        reverse(x.begin(), x.end());
        temp = temp + x;
        i--;
        j--;
    }
    while (i >= 0)
    {
        temp.push_back(alpha[i]);
        i--;
    }
    while (j >= 0)
    {
        temp.push_back(beta[j]);
        j--;
    }
    reverse(temp.begin(), temp.end());
    debug(temp);
    debug(gamma);
    return temp == gamma;
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
        string first, second;
        cin >> first >> second;
        string temp;
        bool flag = true;
        int i = first.length() - 1, j = second.length() - 1;
        while (i >= 0 && j >= 0)
        {
            if (second[j] >= first[i])
            {
                int m = (second[j] - first[i]);
                debug(m);
                temp.push_back(m + '0');
                i--;
                j--;
            }
            else
            {
                if (j - 1 >= 0)
                {
                    int m = (second[j - 1] - '0') * 10 + (second[j] - '0');
                    debug(m);
                    m = m - (first[i] - '0');
                    debug(m);
                    string x1 = to_string(m);
                    reverse(x1.begin(), x1.end());
                    temp = temp + x1;
                    j -= 2;
                    i--;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == false)
        {
            cout << "-1\n";
        }
        else
        {
            while (i >= 0)
            {
                temp.push_back(first[i]);
                i--;
            }
            while (j >= 0)
            {
                temp.push_back(second[j]);
                j--;
            }
            reverse(temp.begin(), temp.end());
            debug(temp);
            if (check(temp, first, second) == true)
            {
                bool flag1 = false;
                for (auto x : temp)
                {
                    if (flag1 == true)
                    {
                        cout << x;
                    }
                    else
                    {
                        if (x > '0')
                        {
                            flag1 = true;
                            cout << x;
                        }
                    }
                }
                cout << "\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
    }
}