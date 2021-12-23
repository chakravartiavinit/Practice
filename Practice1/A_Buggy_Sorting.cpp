#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << "-1\n";
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i << " ";
        }
    }

    return 0;
}
