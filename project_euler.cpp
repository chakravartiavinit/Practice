#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ifstream in("euler.txt");
    string number;
    in >> number;

    unsigned long long best = 0;
    for (int i = 0; i + 3 < 1000; i++)
    {
        unsigned long long temp = 1;
        int count = 0;
        int j = i;
        while (count < 4)
        {
            temp = temp * (number[j] - '0');
            j++;
            count++;
        }
        best = max(best, temp);
    }
    cout << best << "\n";
    return 0;
}