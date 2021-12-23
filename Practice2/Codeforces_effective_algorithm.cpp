#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n;
    long long tmp, id[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        id[tmp] = i;
    }
    long long ans1 = 0, ans2 = 0;
    cin >> m;
    while (m--)
    {
        cin >> tmp;
        tmp = id[tmp];
        ans1 += tmp + 1;
        ans2 += n - tmp;
    }
    cout << ans1 << " " << ans2 << "\n";
    return 0;
}
