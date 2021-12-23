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
        long long n;
        cin >> n;
        long long ans ;
        if (n < 4)
        {
            if (n == 1)
            {
                ans = 20;
            }
            else if (n == 2)
            {
                ans = 36;
            }
            else if (n == 3)
            {
                ans = 51;
            }
        }
        else
        {
            ans = (n / 4) * 44;
            if ((n % 4)== 0)
            {
                ans = ans + 16;
            }
            else if ((n % 4) == 1)
            {
                ans = ans + 32;
            }
            else if ((n % 4) == 2)
            {
                ans = ans + 44;
            }
            else if ((n % 4) == 3)
            {
                ans = ans + 55;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}