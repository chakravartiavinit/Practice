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
        int arr[n], count1 = 0, count2 = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                count1++;
            }
            else if (arr[i] == 2)
            {
                count2++;
            }
        }
        bool flag = false;
        int total = count1 + 2 * count2;
        if (total % 2 != 0)
        {
            flag = false;
        }
        else
        {
            int half = total / 2;
            for (int i = 0; i <= count2; ++i)
            {
                if (2 * i <= half && half - 2 * i <= count1)
                {
                    flag = true;
                    break;
                }
            }
        }
        flag == true ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}