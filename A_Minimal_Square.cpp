#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        int temp1 = max(2 * a, b);
        int temp2 = max(2 * b, a);
        cout << pow(min(temp1, temp2), 2) << "\n";
    }
    return 0;
}