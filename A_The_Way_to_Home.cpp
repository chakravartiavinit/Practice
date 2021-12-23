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
    int n, d;
    cin >> n >> d;
    vector<int> pos;
    string alpha;
    cin >> alpha;
    if (alpha[n - 1] == '0')
    {
        cout << "-1\n";
    }
    else
    {
        for (int i = 0; i < alpha.length(); ++i)
        {
            if (alpha[i] == '1')
            {
                pos.push_back(i + 1);
            }
        }
        debug(pos);
        if (alpha[n - 1] == '0')
        {
            cout << "-1\n";
        }
        else
        {
            int count = 0;
            int ans = 0;
            int i = 0;
            while (i < pos.size())
            {
                int temp = pos[0] + d;
                for (int k = temp; k >= 0; k--)
                {
                    bool flag = false;
                    for (int j = i + 1; j < pos.size(); ++j)
                    {
                        if (pos[i] == k)
                        {
                            i = j;
                            count++;
                            flag = true;
                            break;
                        }
                        else if (pos[i] > k)
                        {
                            break;
                        }
                    }
                    if (flag = true)
                    {
                        break;
                    }
                }
            }
            cout << count << "\n";
        }
    }
}
