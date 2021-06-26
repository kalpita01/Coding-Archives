#include <iostream>
#include <vector>
using namespace std;

void printfun(vector<int> n)
{
    cout << n.size() << " ";
    for (int i = 0; i < n.size(); i++)
        cout << n[i] << " ";
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> p;
    vector<int> ne;
    vector<int> z;

    for (int j = 0; j < n; j++)
    {
        if (a[j] > 0)
        {
            p.push_back(a[j]);
        }
        else if (a[j] < 0)
        {
            ne.push_back(a[j]);
        }
        else
        {
            z.push_back(a[j]);
        }
    }

    if (p.size() == 0)
    {
        p.push_back(ne[ne.size() - 1]);
        p.push_back(ne[ne.size() - 2]);
        ne.pop_back();
        ne.pop_back();
    }

    if (ne.size() % 2 == 0)
    {
        z.push_back(ne[ne.size() - 1]);
        ne.pop_back();
    }

    printfun(ne);
    printfun(p);
    printfun(z);
}