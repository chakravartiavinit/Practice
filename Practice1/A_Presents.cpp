#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n], brr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        brr[arr[i]] = i + 1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        cout << brr[i] << " ";
    }

    return 0;
}