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
        int n, x;
        cin >> n >> x;
        int sum = 0, even = 0, odd = 0;
        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin >> temp;
            sum += temp;
            if (temp % 2 == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        bool flag = false;
        for (int i = 1; i <= odd && i <= x; i += 2)
        {
            int h = even, n = x - i;
            if (n <= even)
            {
                flag = true;
            }
        }
        if (flag == true)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}