#include <iostream>
using namespace std;
int nextyear(int n)
{
    int temp = n + 1;
    int a[10] = {0};
    for (int i = 0; i < 4; i++)
    {
        a[temp % 10]++;
        temp = temp / 10;
    }
    for (int j = 0; j < 10; j++)
    {
        if (a[j] > 1)
        {
            return false;
        }
    }
    
   return true;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
     while (!nextyear(n))
    {
        n=n+1;
    }
    cout<<(n+1);
    return 0;
}
