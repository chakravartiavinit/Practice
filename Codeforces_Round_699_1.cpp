#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = *max_element(a, a + n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += maxi - a[i];
    }
    if (k > sum)
    {
        cout << "-1"
             << "\n";
        return;
    }
    int answer = -1;
    for (int i = 0; i < k; i++)
    {
        bool f = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                answer = j + 1;
                a[j]++;
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            answer = -1;
        }
    }
    cout << answer << "\n";
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}