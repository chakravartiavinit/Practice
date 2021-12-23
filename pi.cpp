#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string pi;
    ifstream in("piee.txt");
    in >> pi;
    long long arr[10] = {0};
    for (int i = 0; i < pi.length(); ++i)
    {
        arr[pi[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Count of " << i << " is:" << arr[i] << "\n";
    }

    cout << "\n";
    for (int i = 0; i < 10; ++i)
    {
        float prob;
        float size = pi.length();
        prob = float(arr[i]) / size;
        cout << "Probability of " << i << " is :" << fixed << setprecision(10) << prob << "\n";
    }

    return 0;
}
