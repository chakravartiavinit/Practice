#include <bits/stdc++.h>
using namespace std;
int checkprime(int a)
{
    int flag = 1;
    while (1)
    {
        flag = 1;
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            return a;
        }
        else
        {
            a++;
        }
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, temp;
    cin >> a >> b;
    if (checkprime(a + 1) == b)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }

    return 0;
}
