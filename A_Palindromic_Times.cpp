#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d:%d", &a, &b);
    while (1)
    {
        b++;
        if (b % 60 == 0)
        {
            a++;
            b = b % 60;
        }
        int m, n;
        m = a % 24;

        n = b;
        if (m / 10 == n % 10 && n / 10 == m % 10)

        {
            printf("%02d:%02d", m, n);
            break;
        }
    }

    return 0;
}
