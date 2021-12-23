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
        int Max, sum = 1;
        cin >> Max;
        n--;
        while (n--)
        {
            int temp;
            cin >> temp;
            if (temp <= Max)
            {
                sum++;
                Max = temp;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}