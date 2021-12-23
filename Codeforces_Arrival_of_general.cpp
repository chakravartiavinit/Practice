#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, maxvalue = 0, minvalue = 1000, maxindex = 0, minindex = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > maxvalue)
        {
            maxindex = i;
            maxvalue = x;
        }
        if (x <= minvalue)
        {
            minindex = i;
            minvalue = x;
        }
    }
    if (maxindex > minindex)
    {
        cout << (maxindex - 1) + (n - minindex) - 1;
    }
    else
    {
        cout << (maxindex - 1) + (n - minindex);
    }
    return 0;
}
