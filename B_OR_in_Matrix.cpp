#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, spaces;
    for (i = 1; i <= 5; i++)
    {
        for (spaces = 1; spaces <= (5 - i); spaces++)
        {
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
