#include <iostream>
using namespace std;
int sumdigit(long int n)
{
    int sum = 0;
    if(n>9)
    {
        while (n)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        n=sumdigit(sum);
    }
    return n;
}
int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        cout<<sumdigit(n)<<"\n";
    }

    return 0;
}