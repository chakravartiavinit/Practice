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
        string alpha, beta;
        cin >> alpha >> beta;
        int answer = 0, answer1 = 0;
        vector<int> visited(n + 1, false);
        for (int i = 0; i < n; ++i)
        {
            if (alpha[i] == '0' && beta[i] == '0')
            {
                answer1++;
            }
            else if (alpha[i] == '0' && beta[i] == '1')
            {
                answer1 += 2;
                answer += 2;
                visited[i] = true;
            }
            else if (alpha[i] == '0' && beta[i] == '2')
            {
                answer1++;
            }
            else if (alpha[i] == '1' && beta[i] == '0')
            {
                answer1 += 2;
                answer += 2;
                visited[i] = true;
            }
            else if (alpha[i] == '1' && beta[i] == '1')
            {
                answer1 += 0;
            }
            else if (alpha[i] == '1' && beta[i] == '2')
            {
                answer1 += 0;
            }
            else if (alpha[i] == '2' && beta[i] == '0')
            {
                answer1 += 1;
            }
            else if (alpha[i] == '2' && beta[i] == '1')
            {
                answer1 += 0;
            }
            else if (alpha[i] == '0' && beta[i] == '0')
            {
                answer1++;
            }
        }
        debug(visited);
        for (int i = 0; i < n; ++i)
        {
            if (visited[i] == false)
            {
                if (alpha[i] == '0' && beta[i] == '0')
                {
                    if (i + 1 < n && visited[i + 1] == false)
                    {
                        if (alpha[i + 1] == '1' && beta[i + 1] == '1' && visited[i + 1] == false)
                        {
                            answer += 2;
                            visited[i] = true;
                            visited[i + 1] = true;
                        }
                        else
                        {
                            answer++;
                            visited[i] = true;
                        }
                    }
                    else
                    {
                        answer++;
                        visited[i] = true;
                    }
                }
                else if (alpha[i] == '1' && beta[i] == '1')
                {
                    if (i + 1 < n && visited[i + 1] == false)
                    {
                        if (alpha[i + 1] == '0' && beta[i + 1] == '0' && visited[i + 1] == false)
                        {
                            answer += 2;
                            visited[i] = true;
                            visited[i + 1] = true;
                        }
                        else
                        {
                            visited[i] = true;
                        }
                    }
                    else
                    {
                        visited[i] = true;
                    }
                }
                else if ((alpha[i] == '0' && beta[i] == '2') || (alpha[i] == '2' && beta[i] == '0'))
                {
                    answer++;
                    visited[i] = true;
                }
            }
        }
        cout << max(answer, answer1) << "\n";
    }
}