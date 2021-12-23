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
        long long c, n1 = 0, n2 = 0;
        cin >> c;
        vector<int> Binary;
        while (c)
        {
            int rem = c % 2;
            Binary.push_back(rem);
            c = c / 2;
        }
        if (Binary[Binary.size() - 1] == 1)
        {
            n1 = n1 + pow(2, Binary.size() - 1);
        }
        for (int i = 0; i < Binary.size() - 1; i++)
        {
            if (Binary[i] == 1)
            {
                n2 = n2 + pow(2, i);
            }
            else
            {
                n2 = n2 + pow(2, i);
                n1 = n1 + pow(2, i);
            }
        }
        cout << n1 * n2 << '\n';
    }
    return 0;
}
