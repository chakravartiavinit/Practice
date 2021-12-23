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
        vector<int> index(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            index[i] = arr[i];
        }

        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << abs(index[i]) << " ";
        }
        cout << "\n";
    }
    return 0;
}
