#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, f1, t1, joy = INT_MIN;
    cin >> n >> k;
    while (n--)
    {
        cin >> f1 >> t1;
        if (t1 <k)
        {
            joy = max(joy, f1);
        }
        else
        {
            joy = max(joy, f1 - (t1 - k));
        }
    }
    cout << joy << "\n";
    return 0;
}