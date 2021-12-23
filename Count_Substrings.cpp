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
        int n, zero = 0, one = 0;
        cin >> n;
        string Binary;
        cin >> Binary;
        for (int i = 0; i < Binary.length(); ++i)
        {
            if (Binary[i] == '1')
            {
                one++;
            }
            else if (Binary[i] == '0')
            {
                zero++;
            }
        }
        if (one < 2)
        {
            cout << "0\n";
        }
        else if (one == Binary.length())
        {
            long long ans = (one * (one + 1)) / 2;
            cout << ans << "\n";
        }
        else
        {
            
        }
        
    }
    return 0;
}