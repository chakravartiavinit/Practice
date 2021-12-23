#include <bits/stdc++.h>
using namespace std;
int Check(int arr[], int low, int high)
{
    int count = 1, finalans = 0;
    for (int i = 0; i < high - 1; ++i)
    {
        if (arr[i] <= arr[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        finalans = max(finalans, count);
    }
    if (count == 1)
    {
        return 0;
    }
    return finalans;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    bool sorted = true, rsorted = true;
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] < arr[i + 1])
        {
            rsorted = false;
        }
    }
    if (sorted == true)
    {
        cout << n << "\n";
    }
    else
    {
        if (rsorted == true)
        {
            cout << "1\n";
        }
        else
        {
            int low = 0, high = n - 1;
            while (low < high)
            {
                int mid = (low + high) / 2;
                if (Check(arr, low, mid) == Check(arr, mid, high))
                {
                    cout << Check(arr, low, mid) << "\n";
                    break;
                }
                else if (Check(arr, low, mid) > Check(arr, mid, high))
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }
        }
    }

    return 0;
}
