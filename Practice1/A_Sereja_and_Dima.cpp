#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; ++i)
    {
        cin >> arr[i];
    }
    int p1 = 0, p2 = t - 1, count = 1, player1 = 0, player2 = 0;
    while (p1 <= p2)
    {
        if (count % 2 == 1)
        {
            if (arr[p2] > arr[p1])
            {
                player1 += arr[p2];
                p2--;
            }
            else
            {
                player1 += arr[p1];
                p1++;
            }
        }
        else
        {
            if (arr[p2] > arr[p1])
            {
                player2 += arr[p2];
                p2--;
            }
            else
            {
                player2 += arr[p1];
                p1++;
            }
        }
        count++;
    }
    cout << player1 << " " << player2 << "\n";
    return 0;
}