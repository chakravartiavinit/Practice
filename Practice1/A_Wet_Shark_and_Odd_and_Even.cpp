#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = false;
    int n, even = 0, odd = 0;
    cin >> n;
    long long arr[n], sum = 0, num;
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
    }
    if (odd % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
    }
    else
    {
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0 && flag == false)
            {
                num = arr[i];
                flag = true;
            }
            sum = sum + arr[i];
        }
        sum = sum - num;
    }
    cout << sum << '\n';
    return 0;
}
