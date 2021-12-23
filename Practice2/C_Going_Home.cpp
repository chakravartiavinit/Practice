#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = false;
    long n, value = 0;
    cin >> n;
    long arr[n];
    vector<int> sum;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum.push_back(arr[i] + arr[j]);
        }
    }
    sort(sum.begin(), sum.end());
    for (int i = 0; i < sum.size(); i++)
    {
        if (sum[i] == sum[i + 1])
        {
            flag = true;
            value = arr[i];
            break;
        }
    }
    if (flag == false)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    return 0;
}
