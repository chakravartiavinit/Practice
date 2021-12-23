#include <iostream>
using namespace std;
int sweet(long long int n)
{
    int maximum = 0, sum = 0;
    while (n)
    {
        sum = sum + n % 10;
        n = n / 10;
        maximum = max(maximum, sum);
    }
    return (sum - maximum) * maximum;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << sweet(n) << "\n";
    }
    return 0;
}