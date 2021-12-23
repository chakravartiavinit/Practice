#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s2 = "6789TJQKA";
    string input1, input2, input3;
    cin >> input1 >> input2 >> input3;
    if (input2[1] == input1[0] && input3[1] != input1[0])
    {
        cout << "YES\n";
    }
    else
    {
        if (input3[1] == input1[0] && input2[1] != input1[0])
        {
            cout << "NO\n";
        }
        else
        {
            if (input2[1] !=input3[1])
            {
                cout << "NO\n";
            }
            else
            {
                if (s2.find(input2[0]) > s2.find(input3[0]))
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}