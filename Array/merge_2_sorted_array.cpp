#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

// merge two arrays using GAP method
// GAP method is similar to shell sort which is similar to insertion sort
void method1(int a[], int n, int b[], int m)
{
    // need to read shell sort properly
}

int main()
{
    int n, m;
    cout << "Enter the size of two arrays: ";
    cin >> n >> m;

    int a[n], b[m];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];

    method1(a, n, b, m);
}