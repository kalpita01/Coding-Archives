#include <iostream>
#include <algorithm>
using namespace std;
int search_ele(int arr[], int n, int x)
{
    int *low = lower_bound(arr, arr + n, x);
    int *high = upper_bound(low, arr + n, x);
    return high - low;
}
int main()
{
    int n, x;
    cout << "Enter the size of the array and the element to search ";
    cin >> n >> x;

    int a[n];
    cout << "Enter elemets of array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Occurs " << search_ele(a, n, x) << " times" << endl;
}