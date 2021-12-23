#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool ans = false;
    int n, a, b;
    cin >> n;
    int arr[n], brr[n];
    vector<pair<int, int>> seg;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr[i] = a;
        brr[i] = b;
        seg.push_back(make_pair(arr[i], brr[i]));
    }
    sort(arr, arr + n);
    sort(brr, brr + n);
    int Min = arr[0];
    int Max = brr[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (seg[i].first == Min && seg[i].second == Max)
        {
            cout << i + 1 << "\n";
            ans = true;
            break;
        }
    }
    if (ans == false)
    {
        cout << "-1\n";
    }

    return 0;
}
