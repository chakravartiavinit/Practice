#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, t;
    cin >> n >> t;
    vector<int> book(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> book[i];
    }
    int j = -1, sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + book[i] <= t)
            sum += book[i];
        else
        {
            sum += book[i];
            while (sum > t)
            {
                j++;
                sum -= book[j];
            }
        }
        ans = max(ans, i - j);
    }
    cout << ans << endl;

    return 0;
}