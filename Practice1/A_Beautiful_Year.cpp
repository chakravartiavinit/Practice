#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a >=(x - y) && b <=k)
            {
                flag = true;
            }
        }
        flag == true ? cout << "LuckyChef\n" : cout << "UnluckyChef\n";
    }
    return 0;
}