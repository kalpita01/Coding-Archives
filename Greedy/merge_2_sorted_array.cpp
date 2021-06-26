// Given two arrays, merge these two arrays
#include <iostream>
using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

// O(n+m) - Space, O(n+m) - Time
void method1(int a[], int n, int b[], int m)
{
    // i pointer for a, j pointer for b, k pointer for c
    int i = 0, j = 0, k = 0;
    int c[n + m];
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            c[k] = b[j];
            k++;
            j++;
        }
        else
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }

    while (i < n)
    {
        c[k] = a[i];
        k++;
        i++;
    }

    while (j < m)
    {
        c[k] = b[j];
        k++;
        j++;
    }

    print(c, m + n);
}

// Using maps from stl
/*
    OVERVIEW
    


*/
void method2(int a[], int n, int b[], int m)
{

}

int main()
{
    int n, m;
    cout << "Enter the size of two array: ";
    cin >> n >> m;
    int a[n], b[m];

    cout << "Enter the first array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the second array: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    // Method 1
    method1(a, n, b, m);
}