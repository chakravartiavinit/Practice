#include <bits/stdc++.h>
using namespace std;
bool longestSub(string s, int key)
{
    int sum = 0;
    int maxsize = -1, startindex;

    // Pick a starting point as i
    for (int i = 0; i < s.length() - 1; i++)
    {
        sum = (s[i] == 0) ? -1 : 1;

        // Consider all subarrays starting from i
        for (int j = i + 1; j < s.length(); j++)
        {
            (s[j] == 0) ? (sum += -1) : (sum += 1);

            // If this is a 0 sum subarray, then
            // compare it with maximum size subarray
            // calculated so far
            if (sum == 0 && maxsize < j - i + 1)
            {
                maxsize = j - i + 1;
                startindex = i;
            }
        }
        if (maxsize == key)
        {
            return true;
        }
    }

    return false;
}
bool Check(string a, string b)
{
    int count = 0;
    if (a == b)
    {
        return true;
    }
    for (int i = 0; i < a.length(); ++i)
    {
        if (a[i] != b[i])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        if (longestSub(a, count) == true)
        {
            return true;
        }
    }
    return false;
}
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
        string a, b;
        cin >> a >> b;
        if (Check(a, b) == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}