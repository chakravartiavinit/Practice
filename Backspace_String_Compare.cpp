#include <bits/stdc++.h>
using namespace std;
int check(int arr[], int k, int n)
{
    int p1 = 0, count = 0;
    int p2 = n - 1;
    while (p1 <= p2)
    {
        if (arr[p1] * arr[p2] < k)
        {
            p1++;
            count += p2 - p1 + 1;
        }
        else if (arr[p1] *arr[p2] > k)
        {
            p2--;
        }
    }
    return count;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {3, 0, 1, 3, 6, 8, 11, 14, 18, 25};
    cout << check(arr, 80, 10);

    return 0;
}
