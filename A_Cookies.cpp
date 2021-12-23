#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, even = 0, odd = 0, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        sum = sum + arr[i];
    }
    if (sum % 2 == 0)
    {
        cout << even << '\n';
    }
    else
    {
        cout << odd << '\n';
    }

    return 0;
}