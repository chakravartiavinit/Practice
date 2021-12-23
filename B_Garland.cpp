#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count = 0;
    string n, m;
    cin >> n >> m;
    map<char, int> n1, m1;
    unordered_set<char> a, b;
    for (int i = 0; i < n.length(); ++i)
    {
        n1[n[i]]++;
        a.insert(n[i]);
    }
    for (int j = 0; j < m.length(); ++j)
    {
        m1[m[j]]++;
        b.insert(m[j]);
    }
    for (auto x : b)
    {
        if (a.find(x) != a.end())
        {
            count += min(n1[x], m1[x]);
        }
        else
        {
            count = 0;
            break;
        }
    }
    if (count == 0)
    {
        cout << "-1\n";
    }
    else
    {
        cout << count << "\n";
    }

    return 0;
}