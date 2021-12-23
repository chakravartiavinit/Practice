#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n;
    cin >> n;
    bool flag = true;
    long arr[n], c25 = 0, c50 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (long i = 0; i < n; i++)
    {
        if (arr[i] == 25)
        {
            c25++;
        }
        else if (arr[i] == 50)
        {
            if (c25 >= 1)
            {
                c25--;
                c50++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (c25 > 0 && c50 > 0)
            {
                c25--;
                c50--;
            }
            else if (c25 >= 3)
            {
                c25 -= 3;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    flag == true ? cout << "YES\n" : cout << "NO\n";

    return 0;
}