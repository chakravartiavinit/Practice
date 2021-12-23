#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int withdraw;
    float balance;
    cin >> withdraw;
    cin >> balance;
    if ((withdraw % 5 == 0) && (balance > (withdraw + 0.50)))
        cout << (balance - withdraw - 0.50);
    else
        cout << balance;
    return 0;
}