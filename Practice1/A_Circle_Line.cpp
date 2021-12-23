#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int d[100 + 10];
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> d[i];
    }
    int s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << "0\n";
        return 0;
    }
    if (s > t)
        swap(s, t);
    int sum1 = 0, sum2 = 0;
    for (int i = s; i < t; ++i)
        sum1 += d[i];
    for (int i = t; i <= n; ++i)
        sum2 += d[i];
    for (int i = 1; i < s; ++i)
        sum2 += d[i];
    sum1 = min(sum1, sum2);
    cout << sum1 << endl;
    return 0;
}