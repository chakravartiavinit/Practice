#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n, high = 2 * 1000 * 1000 * 1000, low = -high;
    cin >> n;
    while (n--)
    {
        string s1, s2, s3;
        long x;
        cin >> s1;
        cin >> x;
        cin >> s3;
        if (s3 == "N")
        {
            if (s1 == ">=")
                s1 = "<";
            else if (s1 == "<")
                s1 = ">=";
            else if (s1 == "<=")
                s1 = ">";
            else
                s1 = "<=";
        }
        if (s1 == ">=")
        {
            low = max(low, x);
        }
        else if (s1 == ">")
        {
            low = max(low, x + 1);
        }
        else if (s1 == "<")
        {
            high = min(high, x - 1);
        }
        else if (s1 == "<=")
        {
            high = min(high, x);
        }
    }
    if (low <= high)
        cout << low;
    else
        cout << "Impossible";

    return 0;
}
