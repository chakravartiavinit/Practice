#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        count=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                count++;
            }
        }
        cout << count + 1 << " ";
    }

    return 0;
}