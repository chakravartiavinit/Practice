#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, a, b;
    cin >> n;
    int arr[5] = {0};
    arr[n] = 1;
    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        swap(arr[a], arr[b]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 1)
        {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}
