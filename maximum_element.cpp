#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<long long> s, m;
    int t, x;
    long long n, v, mx = -1;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> v;
            if (mx == -1 || m.empty())
            {
                mx = v;
            }
            else
            {
                mx = max(m.top(), v);
            }
            s.push(v);
            m.push(mx);
        }
        else if (x == 2)
        {
            s.pop();
            m.pop();
        }
        else
        {
            cout << m.top() << '\n';
        }
    }
    return 0;
}