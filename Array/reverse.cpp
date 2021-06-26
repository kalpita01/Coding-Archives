#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int *a, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(*(a + i), *(a + n - i - 1));
    }
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    reverse(a, n);
    print_array(a, n);
}