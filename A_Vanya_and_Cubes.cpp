#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int count = 0, i = 1;
    while (1)
    {
        int temp = (i * (i + 1)) / 2;
        n = n - temp;
        if (n >=0)
        {
            count++;
        }
        else
        {
            break;
        }
        i++;
    }
    cout << count << "\n";

    return 0;
}