#include <bits/stdc++.h>
using namespace std;
#define LIMIT 1000000
long long i, j;
bool prime_flag[LIMIT] = {false};
void calculate_prime_flag()
{
    prime_flag[0] = prime_flag[1] = true;
    for (i = 2; i < LIMIT; i++)
    {
        if (prime_flag[i] == false)
        {
            for (j = i * i; j < LIMIT; j += i)
            {
                prime_flag[j] = true;
            }
        }
    }
}
int check_perfect_square(long long n)
{
    double sqrt_n = sqrt(n);
    if (sqrt_n == int(sqrt_n))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    calculate_prime_flag();
    long long total_numbers, n;
    cin >> total_numbers;
    for (i = 0; i < total_numbers; i++)
    {
        cin >> n;
        if (n == 4)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else if (check_perfect_square(n) == true && prime_flag[int(sqrt(n))] == false)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}