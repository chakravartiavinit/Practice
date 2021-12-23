#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool arr[3001] = {false};
    bool mark = false;
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[temp] = true;
    }
    for (int j = 1; j < 3001; j++)
    {
        if (arr[j] == false)
        {
            mark = true;
            temp = j;
            break;
        }
    }
    if (mark)
    {
        cout << temp << "\n";
    }
    else
    {
        cout << "3001\n";
    }

    return 0;
}