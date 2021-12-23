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
        {

            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] > a[i])
                    break;
                else if (a[j] == a[i])
                    count++;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[i])
                    break;
                else if (a[j] == a[i])
                    count++;
            }
            cout << count << " ";
        }
        cout << "\n";
    }
}