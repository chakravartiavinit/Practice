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
        int ans;
        int n;
        int sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0)
        {

            cout << "0"
                 << "\n";
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] == 2)
                {
                    ans = 1;
                    break;
                }
            }
            if (ans == 1)
            {
                cout << "1\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
    }
}