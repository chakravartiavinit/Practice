#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long long int input, odd = 0;
        for (long int i = 0; i < n; i++)
        {
            cin >> input;
            if (input % 2 != 0)
            {
                odd++;
            }
        }
        if (odd % 2 == 0)
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            cout << "2"
                 << "\n";
        }
    }
    return 0;
}
