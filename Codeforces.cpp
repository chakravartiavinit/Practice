#include <iostream>
using namespace std;
int number(int n, int k)
{
    int count = 1;
    if (n == k)
    {
        return 1;
    }
    else
    {
        while (n%k>0)
        {
            if (n % k == 0)
            {
                return count;
            }
            for (int i = 0; i < n; i++)
            {
                n = n + i;
            }
            count++;
        }
    }
    return count;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        cout << number(n, k) << "\n";
    }
    return 0;
}
