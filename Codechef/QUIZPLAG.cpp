#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    cout << "START\n";
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[k];
        for (int i = 0; i < k; i++)
            cin >> a[i];

        vector<int> v;
        unordered_map<int, int> mp;

        for (int i = 0; i < k; i++)
            mp[a[i]] = 0;

        // for (int i = 0; i < k; i++)
        //     cout << a[i] << " ";
        for (int i = 0; i < k; i++)
        {
            mp[a[i]]++;
        }

        // for (int i = 0; i < k; i++)
        // {
        //     cout << a[i] << " " << mp[a[i]] << endl;
        // }

        for (auto i : mp)
        {
            if (i.second > 1 && i.first <= n)
            {
                v.push_back(i.first);
            }
        }

        int count = v.size();

        sort(v.begin(), v.end());

        cout << count << " ";
        for (int i = 0; i < count; i++)
            cout << v[i] << " ";
    }
}