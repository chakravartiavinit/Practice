#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = false;
    int n, sum = 0, count1 = 0, count2 = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 100)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    sum = 100 * count1 + 200 * count2;
    if ((sum % 200) != 0)
    {
        flag = false;
    }
    else
    {
        int half = sum / 2;
        for (int i = 0; i <= count2; ++i)
        {
            if (200 * i <= half && half - 200 * i <= count1 * 100)
            {
                flag = true;
                break;
            }
        }
    }
    flag == true ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
