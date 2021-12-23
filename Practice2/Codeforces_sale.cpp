#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, ans = 0, a, posindex, sum1 = 0;
    cin >> n >> m;
    vector<int> neg, pos;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a >= 0)
        {
            pos.push_back(a);
        }
        else
        {
            neg.push_back(a);
        }
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());
    if (m > neg.size())
    {
        sum1 = accumulate(neg.begin(), neg.end(), 0);
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            sum1 = sum1 + neg[i];
        }
    }

    cout << abs(sum1) << "\n";
    return 0;
}
