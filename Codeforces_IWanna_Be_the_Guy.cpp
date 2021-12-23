#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int> s;
    int n, p, q, m, sum = 0;
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> m;
        s.insert(m);
    }
    cin >> q;
    for (int j = 0; j < q; j++)
    {
        cin >> m;
        s.insert(m);
    }
    sum = accumulate(s.begin(), s.end(), 0);
    int sum1 = (n * (n + 1)) / 2;
    sum == sum1 ? cout << "I become the guy." : cout << "Oh, my keyboard!";

    return 0;
}