#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, flag = 0;
    cin >> n;
    int arr[] = {4, 7, 47, 44, 74, 77, 444, 447, 477, 447, 477, 777, 744, 774};
    for (int i = 0; i < 14; i++)
    {
        if ((n % arr[i]) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        cout << "YES"
             << "\n";
    }

    return 0;
}