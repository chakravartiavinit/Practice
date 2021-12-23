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
        long long a, b;
        cin >> a >> b;
        long long count = 0;
        while (a > 0 && b > 0)
        {
            long long temp;
            if (a > b)
            {
                temp = a / b;
                count += temp;
                a = a - (a / b) * b;
            }
            else
            {
                temp = b / a;
                count += temp;
                b = b - (b / a) * a;
            }
        }
        cout << count << "\n";
    }
    return 0;
}