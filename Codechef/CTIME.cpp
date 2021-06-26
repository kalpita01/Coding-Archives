#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    //cout << "START\n";
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k, f;
        cin >> n >> k >> f;
        vector<pair<int, int> > v;

        int l, r;

        for (int i = 0; i < n; i++)
        {
            cin >> l >> r;
            v.push_back(make_pair(l, r));
        }

        sort(v.begin(), v.end());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i].first << " " << v[i].second << "\n";
        // }

        int end_time = v[0].second;
        int count = v[0].first;

        for (int i = 0; i < n; i++)
        {
            count += max(0, v[i].first - end_time);
            end_time = max(end_time, v[i].second);
        }

        count += f - end_time;

        cout << (count >= k ? "YES" : "NO") << "\n";
    }
}
