#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = false;
    int n, a, b, c, d;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        a = arr[i];
        b = arr[a - 1];
        c = arr[b - 1];
        d = arr[c - 1];
        if (a == d)
        {
            flag = true;
            break;
        }
    }
    flag == true ? cout << "YES\n" : cout << "NO\n";
    return 0;
}