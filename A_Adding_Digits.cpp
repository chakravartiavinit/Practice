#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int index = -1;
    bool flag = false;
    long a, b, n;
    cin >> a >> b >> n;
    vector<int> l, r;
    for (int i = 0; i < 10; i++)
    {
        if ((a * 10 + i) % b == 0)
        {
            flag = true;
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "-1\n";
    }
    else
    {
        while (a)
        {
            l.push_back(a % 10);
            a = a / 10;
        }
        for (int i = l.size() - 1; i >= 0; i--)
        {
            r.push_back(l[i]);
        }
        r.push_back(index);
        for (int i = 1; i < n; i++)
        {
            r.push_back(0);
        }
        for (int i = 0; i < r.size(); i++)
        {
            cout << r[i];
        }
    }

    return 0;
}
