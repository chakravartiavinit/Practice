#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
using namespace std;
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
bool check_vowel(char temp)
{
    if (temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' | temp == 'U')
    {
        return true;
    }
    else
    {
        return false;
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
    for (int i = 1; i <= t; ++i)
    {
        map<char, int> mp;
        string s;
        cin >> s;
        for (auto x : s)
        {
            mp[x]++;
        }
        if (mp.size() == 1)
        {
            cout << "Case #" << i << ": ";
            cout << "0\n";
        }
        else
        {
            int vowel_count = 0, consonant_count = 0;
            int Max_vowel_freq = INT_MIN, Max_consonant_freq = INT_MIN;
            for (auto x : mp)
            {
                if (check_vowel(x.first) == true)
                {
                    vowel_count+=x.second;
                    Max_vowel_freq = max(x.second, Max_vowel_freq);
                }
                else
                {
                    consonant_count+=x.second;
                    Max_consonant_freq = max(x.second, Max_consonant_freq);
                }
            }
            int answer1, answer2;
            answer1 = 2 * (vowel_count - Max_vowel_freq) + consonant_count;
            answer2 = 2 * (consonant_count - Max_consonant_freq) + vowel_count;
            cout << "Case #" << i << ": ";
            cout << min(answer1, answer2) << "\n";
        }
    }
}