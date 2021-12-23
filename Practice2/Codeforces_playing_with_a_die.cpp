#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, first = 0, second = 0, tie = 0;
    cin >> a >> b;
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        if (abs(arr[i] - a) == abs(arr[i] - b))
        {
            tie++;
        }
        else
        {
            if (abs(arr[i] - a) > abs(arr[i] - b))
            {
                second++;
            }
            else
            {
                first++;
            }
        }
    }
    cout << first << " " << tie << " " << second << "\n";
    return 0;
}