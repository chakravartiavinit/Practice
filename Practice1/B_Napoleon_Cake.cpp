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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int temp = a[n - 1];
        bool b[n] = {false};
        for (int i = n - 1; i >= 0; i--)
        {
            if (temp != 0 || a[i] != 0)
            {
                b[i] = true;
                temp = max(temp, a[i]);
                temp--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            b[i] == true ? cout << "1 " : cout << "0 ";
        }
        cout << "\n";
    }
    return 0;
}