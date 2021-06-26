#include <iostream>
using namespace std;
int main()
{
    int na, nb;
    cin >> na >> nb;

    int a[na], b[nb], k, m;
    cin >> k >> m;

    for (int i = 0; i < na; i++)
        cin >> a[i];

    for (int i = 0; i < nb; i++)
        cin >> b[i];

    int mini = a[k - 1];
    int maxi = b[nb - m];

    if (maxi - mini > 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}