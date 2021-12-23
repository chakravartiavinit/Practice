#include <iostream>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    
    while (t--)
    {
        long int l, r;
        cin >> l >> r;

        long int num;
        num = abs(2*(l-r) - 1);

        cout << num << "\n";
    }
    return 0;
}
