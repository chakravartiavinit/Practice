#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'R')
        {
            count++;
        }
        else if (s[i] == 'B' && s[i + 1] == 'B')
        {
            count++;
        }
        else if (s[i] == 'G' && s[i + 1] == 'G')
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
