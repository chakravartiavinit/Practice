#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = true;
    int n, s, count = 0;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > s)
        {
            flag = false;
            break;
        }
        else
        {
            s = s - arr[i];
        }
    }
    flag == true ? cout << "YES\n" : cout << "NO\n";
    return 0;
}