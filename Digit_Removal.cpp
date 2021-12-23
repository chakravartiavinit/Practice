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
void Brute(long long beta, int digit)
{
    for (long long i = beta; i <= beta + 1e6; ++i)
    {
        map<int, int> mp;
        long long alpha = i;
        while (alpha)
        {
            int t = alpha % 10;
            mp[t]++;
            alpha /= 10;
        }
        bool flag = true;
        for (auto x : mp)
        {
            if (x.first == digit)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << i - beta;
            return;
        }
    }
}
void Normal(long long n, int digit)
{
    long long answer = 1;
    long long alpha = n;
    bool found = false;
    string temp = to_string(n);
    int pos = -1;
    for (int i = 0; i < temp.length(); ++i)
    {
        if ((temp[i] - '0') == digit)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        cout << 0 << "\n";
    }
    else
    {
        string t;
        if (digit == 9)
        {
            if (pos == 0)
            {
                t.push_back('1');
                for (int i = 0; i < temp.length(); ++i)
                {
                    t.push_back('0');
                }
            }
            else
            {
                int pos_other = -1;
                for (int i = pos; i >= 0; --i)
                {
                    if ((temp[i] - '0') <= 7)
                    {
                        pos_other = i;
                        break;
                    }
                }
                debug(pos_other);
                if (pos_other != -1)
                {
                    for (int i = 0; i < pos_other; ++i)
                    {
                        t.push_back(temp[i]);
                    }
                    t.push_back(temp[pos_other] + 1);
                    for (int i = pos_other + 1; i < temp.length(); ++i)
                    {
                        t.push_back('0');
                    }
                }
                else
                {
                    t.push_back('1');
                    for (int i = 0; i < temp.length(); ++i)
                    {
                        t.push_back('0');
                    }
                }
            }
        }
        else if (digit == 0)
        {
            for (int i = 0; i < pos; ++i)
            {
                t.push_back(temp[i]);
            }
            for (int i = pos; i < temp.length(); ++i)
            {
                t.push_back('1');
            }
        }
        else
        {
            for (int i = 0; i < pos; ++i)
            {
                t.push_back(temp[i]);
            }
            t.push_back(temp[pos] + 1);
            for (int i = pos + 1; i < temp.length(); ++i)
            {
                t.push_back('0');
            }
        }
        debug(temp);
        debug(t);
        // long long beta = stoll(t);
        // long beta2 = stoll(temp);
        long long beta = 0, beta2 = 0;
        int counter = 0;
        for (int i = t.length() - 1; i >= 0; --i)
        {
            long long m1 = pow(10, counter);
            beta += (t[i] - '0') * (1LL) * m1;
            counter++;
        }
        counter = 0;
        for (int i = temp.length() - 1; i >= 0; --i)
        {
            long long m = pow(10, counter);
            beta2 += (temp[i] - '0') * (1LL) * m;
            counter++;
        }
        debug(beta);
        debug(beta2);
        cout << beta - beta2 << "\n";
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
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int digit;
        cin >> digit;
        // cout << digit << " ";
        Normal(n, digit);
        // Brute(n, digit);
    }
}
