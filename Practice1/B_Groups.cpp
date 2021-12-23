#include <iostream>

using namespace std;

int main()
{

    cout << 1 << endl
         << 200000;

    for (int i = 1; i <= 100000; i++)

        cout << endl
             << 1 << ' ' << i;

    for (int i = 100001; i <= 200000; i++)

        cout << endl
             << i << ' ' << 100000;

    cout << endl;

    return 0;
}