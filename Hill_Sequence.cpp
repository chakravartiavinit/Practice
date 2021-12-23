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
        vector<long long> vt(n);
        map<long long, int> mp;
        long long Max=INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            cin >> vt[i];
            Max=max(Max,vt[i]);
            mp[vt[i]]++;
        }
        if (n == 1)
        {
            cout << vt[0] << "\n";
        }
        else if (n == 2)
        {
            if (vt[0] == vt[1])
            {
                cout << "-1\n";
            }
            else
            {
                cout << max(vt[0], vt[1]) << " " << min(vt[0], vt[1]) << "\n";
            }
        }
        else
        {
            bool flag = true;
            for (auto x : mp)
            {
                if (x.second > 2)
                {
                    flag = false;
                }
            }
            if (flag == false||mp[Max]>=2)
            {
                cout << "-1\n";
            }
            else
            {
                vector<long long> first, second;
                for (auto x : mp)
                {
                    if (x.second == 1)
                    {
                        first.push_back(x.first);
                    }
                    else
                    {
                        second.push_back(x.first);
                        first.push_back(x.first);
                    }
                }
                sort(second.begin(), second.end());
                sort(first.rbegin(), first.rend());
                for (int i = 0; i < second.size(); ++i)
                {
                    cout << second[i] << " ";
                }
                for (int i = 0; i < first.size(); ++i)
                {
                    cout << first[i] << " ";
                }
                cout << "\n";
            }
        }
    }
}
