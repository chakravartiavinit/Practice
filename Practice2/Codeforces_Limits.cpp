#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n + 1], b[m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m + 1; j++)
    {
        cin >> b[j];
    }
    if (n > m)
    {
        if ((b[0] > 0 and a[0] > 0) || (b[0] < 0 and a[0] < 0))
        {
            cout << "Infinity" << endl;
        }
        else
        {
            cout << "-Infinity" << endl;
        }
    }
    else if (m > n)
    {
        cout << "0/1" << endl;
    }
    else
    {
        int g = __gcd(a[0], b[0]);
        a[0] /= g;
        b[0] /= g;
        if ((b[0] > 0 and a[0] > 0) || (b[0] < 0 and a[0] < 0))
        {
            cout << a[0] << "/" << b[0] << endl;
        }
        else
        {
            cout << "-" << abs(a[0]) << "/" << abs(b[0]) << endl;
        }
    }
    return 0;
}