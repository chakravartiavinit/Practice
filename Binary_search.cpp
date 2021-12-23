#include <iostream>
using namespace std;
int BinarSearch(int arr[], int n) //Binary search in an sorted array
{
    int start = 0, last = 13, mid;
    while (start <= last)
    {
        mid = start + (last - start) / 2;
        if (arr[mid] == n)
        {
            return mid;
        }
        else if (n < arr[mid])
        {
            last = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int BinaryRevSearch(int arr[], int start, int last, int key) //Binary search when array is reverse sorted
{
    int mid;
    while (start <= last)
    {
        mid = start + (last - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return -1;
}
void AgnosticBinarySearch(int arr[], int n)
{
    //Check if ->
    //Ascending then use first function.
    //Descending then use second function.
}
int FirstOccurence(int arr[], int start, int last, int key)
{
    int mid;
    int res = -1;
    while (start <= last)
    {
        mid=start+(last-start)/2;
        if (arr[mid] == key)
        {
            res = mid;
            last = mid - 1;
        }
        else if (arr[mid] > key)
        {
            last = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[] = {2, 4, 6, 8, 10, 10, 10, 23, 25, 27, 28, 29, 30};
    int arr2[] = {20, 17, 15, 14, 13, 12, 10, 9, 8, 4};
    int k;
    cin >> k;
     cout << BinarSearch(arr, k) << "\n";
    // cout << BinaryRevSearch(arr2, 0, 10, k) << "\n";
    cout << FirstOccurence(arr, 0, 12, k);
    return 0;
}