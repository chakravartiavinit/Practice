#include <bits/stdc++.h>
using namespace std;
bool check(int arr[], int k)
{
    bool flag = true;
    for (int i = 0; i < 30; i++)
    {
        if (arr[i] % k != 0)
        {
            flag = false;
        }
    }
    return flag;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[30] = {0}, k;
    cin >> k;
    string s, final;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - 97]++;
    }
    sort(s.begin(), s.begin() + s.size());
    if (check(a, k))
    {
        for (int i = 0; i < k; i++)
        {
            for (int l = 0; l < s.size(); l += k)
            {
                cout << s[l];
            }
        }
    }
    else
    {
        cout << "-1\n";
    }

    return 0;
}
