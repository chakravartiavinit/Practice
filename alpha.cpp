#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string n, m;
    cin >> n >> m;
    int arr[30] = {0}, brr[30] = {0};
    for (int i = 0; i < n.length(); ++i)
    {
        arr[n[i] - 'a']++;
    }
    for (int j = 0; j < m.length(); ++j)
    {
        brr[m[j] - 'a']++;
    }
    int count = 0;
    for (int i = 0; i < 30; ++i)
    {
        count = count + min(arr[i], brr[i]);
    }
    if (count == 0)
    {
        cout << "-1\n";
    }
    else
    {
        cout << count << "\n";
    }

    return 0;
}