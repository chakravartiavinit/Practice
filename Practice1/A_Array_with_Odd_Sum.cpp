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
        int n;
        cin >> n;
        int arr[n];
        int sum = 0, even = 0, odd = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else if (arr[i] % 2 == 1)
            {
                odd++;
            }
            sum += arr[i];
        }
        bool flag = false;
        if (sum % 2 == 1)
        {
            flag = true;
        }
        else
        {
            if (odd > 0 && even > 0)
            {
                flag = true;
            }
        }
        flag == true ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}