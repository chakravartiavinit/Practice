#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, least, count = 0, high;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    least = arr[0];
    high = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > high)
        {
            high = arr[i];
            count++;
        }
        else if (arr[i] < least)
        {
            least = arr[i];
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
