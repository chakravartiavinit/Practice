#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> d;
    map<int, int>::iterator itr;
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        b = i;
        d.insert(make_pair(a, b));
    }
    for (itr = d.begin(); itr != d.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    return 0;
}