#include <iostream>
#include <string>
using namespace std;
int main()
{
    //cout << "start\n";
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;

        // true means it is valid, 0 means not valid
        int flag = 1;

        while (k--)
        {
            string s;
            cin >> s;

            if (flag)
            {
                if (islower(s[0]))
                {
                    for (int i = 0; i < s.length(); i++)
                    {
                        if (s[i] >= 'a' && s[i] <= 'm')
                        {
                            //pass
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                else if (isupper(s[0]))
                {
                    for (int i = 0; i < s.length(); i++)
                    {
                        if (s[i] >= 'N' && s[i] <= 'Z')
                        {
                            //pass
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}