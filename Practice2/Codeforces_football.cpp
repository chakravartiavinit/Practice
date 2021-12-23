#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, i = 0, count1 = 0, count2 = 0;
    cin>>n;
    string s1, s2,s3;
    cin >> s1;
    count1++;
    for (i = 0; i < n - 1; i++)
    {
        cin >> s2;
        if (s1 == s2)
        {
            count1++;
        }
        else
        {
            s3=s2;
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << s1 << "\n";
    }
    else
    {
        cout << s3 << "\n";
    }

    return 0;
}
