#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (odd % 2 == 1 || (odd >= 1 && even >= 1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}