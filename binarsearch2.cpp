#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s, e;
    s = 0;
    e = n;
    while (s <= n)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    int count, key;
    cin >> count;
    int arr[count];
    cout << "Insert " << count << " Element" << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the search Element : " << endl;
    cin >> key;
    cout <<"Element Found at Index "<< binarysearch(arr, count, key);

    return 0;
}