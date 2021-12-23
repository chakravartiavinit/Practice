#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define alpha tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;

//::::::::::: :::    ::: ::::::::::      :::     :::::::::      :::     :::::::::  :::::::::   ::::::::  ::::    :::
//    :+:     :+:    :+: :+:           :+: :+:   :+:    :+:   :+: :+:   :+:    :+: :+:    :+: :+:    :+: :+:+:   :+:
//    +:+     +:+    +:+ +:+          +:+   +:+  +:+    +:+  +:+   +:+  +:+    +:+ +:+    +:+ +:+    +:+ :+:+:+  +:+
//    +#+     +#++:++#++ +#++:++#    +#++:++#++: +#++:++#+  +#++:++#++: +#+    +:+ +#+    +:+ +#+    +:+ +#+ +:+ +#+
//    +#+     +#+    +#+ +#+         +#+     +#+ +#+    +#+ +#+     +#+ +#+    +#+ +#+    +#+ +#+    +#+ +#+  +#+#+#
//    #+#     #+#    #+# #+#         #+#     #+# #+#    #+# #+#     #+# #+#    #+# #+#    #+# #+#    #+# #+#   #+#+#
//    ###     ###    ### ##########  ###     ### #########  ###     ### #########  #########   ########  ###    ####

#define MOD 1000000007
#define PI 3.141592653589793238462

/*########################################## #DEBUG############################################################################################### */
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

/*############################################################################################################################################### */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long a[n];
    unordered_set<long long> st;
    alpha accha;
    long long q;
    cin >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        accha.insert(a[i]);
        st.insert(a[i]);
    }
    sort(a, a + n);
    while (q--)
    {
        long long p;
        long long x;
        cin >> x;
        if (st.find(x) != st.end())
        {
            cout << "0\n";
        }
        else
        {
            if (x < a[0])
            {
                if (n % 2 == 1)
                {
                    cout << "NEGATIVE"
                         << "\n";
                }
                else
                    cout << "POSITIVE"
                         << "\n";
            }
            else if (x > a[n - 1])
            {
                cout << "POSITIVE"
                     << "\n";
            }
            else
            {
                long long ans = accha.order_of_key(x);
                if ((n - ans) % 2 == 1)

                {
                    cout << "NEGATIVE"
                         << "\n";
                }
                else
                    cout << "POSITIVE"
                         << "\n";
            }
        }
    }
}