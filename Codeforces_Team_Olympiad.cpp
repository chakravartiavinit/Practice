#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int n)
{
    int b[3] = {0}, ans = 0;
    for (int i = 0; i < n; i++)
    {
        b[arr[i] - 1]++;
    }
    ans = min(b[0], min(b[1], b[2]));
    return ans;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, ans;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> one, two, three;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            one.push_back(i + 1);
        }
        else if (a[i] == 2)
        {
            two.push_back(i + 1);
        }
        else if (a[i] == 3)
        {
            three.push_back(i + 1);
        }
    }
    if (check(a, n) == 0)
    {
        cout << "0\n";
    }
    else
    {
        ans = check(a, n);
        cout << ans << "\n";
        for (int i = 0; i < ans; i++)
        {
            cout << one[i] << " " << two[i] << " " << three[i] << "\n";
        }
    }

    return 0;
}