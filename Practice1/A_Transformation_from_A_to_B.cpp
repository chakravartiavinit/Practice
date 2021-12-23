#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.141592653589793238462

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
    long long a, b;
    cin >> a >> b;
    bool flag = false;
    set<long long> process;
    process.insert(b);
    while (b >= a)
    {
        string temp = to_string(b);
        if (b == a)
        {
            flag = true;
            process.insert(a);
            break;
        }
        else if (temp[temp.length() - 1] == '1')
        {
            b = (b - 1) / 10;
            process.insert(b);
        }
        else
        {
            int t1 = temp[(temp.length() - 1)] - '0';
            debug(t1);
            if (t1 % 2 == 0)
            {
                b = b / 2;
                process.insert(b);
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
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        cout << process.size() << "\n";
        for (auto x : process)
        {
            cout << x << " ";
        }
    }
}
