#include <iostream>

using namespace std;

int MinColor(int *balls, int n)
{
    int count = 1;
    int maxCount = 0;
    if (n == 1)
        return 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (*(balls + i) == *(balls + i + 1))
            count++;
        else
        {
            if (maxCount < count)
            {
                maxCount = count;
            }
            count = 1;
            continue;
        }
    }

    if (maxCount < count)
    {
        maxCount = count;
    }

    return maxCount;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, Color;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Color = MinColor(&a[0], n);
        cout << Color << "\n";
    }
    return 0;
}