#include <iostream>
using namespace std;
long long int merge(int a[], int temp[], int l, int mid, int r)
{
    long long int inv = 0;

    int i = l, j = mid, k = l;

    while (i <= (mid - 1) && j <= r)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
            inv += (mid - i);
        }
    }

    while (i <= (mid - 1))
    {
        temp[k++] = a[i++];
    }

    while (j <= r)
        temp[k++] = a[j++];

    for (i = l; i <= r; i++)
        a[i] = temp[i];

    return inv;
}
long long int mergeSort(int a[], int temp[], int l, int r)
{
    long long int inv = 0;
    if (r > l)
    {
        int m = (l + r) / 2;
        inv += mergeSort(a, temp, l, m);
        inv += mergeSort(a, temp, m + 1, r);
        inv += merge(a, temp, l, m + 1, r);
    }
    return inv;
}
int main()
{
    cout << "START\n";
    int n;
    cin >> n;

    int a[n], temp[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << mergeSort(a, temp, 0, n - 1) << endl;
}