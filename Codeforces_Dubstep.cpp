#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char a[210];
    cin >> a;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            cout<<" ";
            i = i + 2;
        }
        else
        {
            cout << a[i];
        }
    }
    return 0;
}
