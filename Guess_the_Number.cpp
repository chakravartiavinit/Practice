#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    bool alpha = false;
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        for (int i = 2; i <= 1000; ++i)
        {
            bool array[1000000] = {true};
            for (int j = i; sqrt(j) <= 1000; j *= j)
            {
                if (array[j] == true)
                {
                    cout << j << endl;
                    if (l == 1)
                    {
                        alpha = true;
                        break;
                    }
                    else if (l == 0)
                    {
                        continue;
                    }
                    else if (l == -1)
                    {
                        return 0;
                    }
                    array[j] = false;
                }
            }
            if (alpha == true)
            {
                break;
            }
        }
    }

    return 0;
}