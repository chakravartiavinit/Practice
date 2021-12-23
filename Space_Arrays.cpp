#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        int n, sum = 0;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > i + 1)
            {
                flag = false;
                break;
            }
            else
            {
                sum = sum + (i + 1 - arr[i]);
            }
        }
        if (flag == false)
        {
            cout << "Second\n";
        }
        else
        {
            if (sum % 2 == 0)
            {
                cout << "Second\n";
            }
            else
            {
                cout << "First\n";
            }
        }
    }
    return 0;
}
