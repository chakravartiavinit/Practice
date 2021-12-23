#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30}, n = 10;
    stack<int> s;
    s.push(0);
    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        int span = (s.empty()) ? (i + 1) : (i - s.top());
        cout << span << " ";
        s.push(i);
    }
    return 0;
}