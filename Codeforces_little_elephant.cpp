#include <iostream>
using namespace std;
int LittleFunction(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    }
    LittleFunction(arr, n - 1);
    swap(arr[n - 1], arr[n]);
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i <= n; i++)
    {
        a[i] = i + 1;
    }
    LittleFunction(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}