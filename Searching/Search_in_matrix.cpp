#include <iostream>
using namespace std;
bool search_matrix(int a[4][4], int n, int target)
{
    int x = n - 1;
    int y = 0;
    while (x >= 0 && y <= n - 1)
    {
        if (a[x][y] > target)
        {
            x--;
        }
        else if (a[x][y] < target)
        {
            y++;
        }
        else
        {
            return true;
        }
    }
    return false;
}
int main()
{

    int a[4][4] = {{10, 20, 30, 40},
                   {15, 25, 35, 45},
                   {27, 29, 37, 48},
                   {32, 33, 39, 50}};

    // number of rows and columns
    int n = 4, target = 2;
    cout << "Element Present: " << search_matrix(a, n, target) << endl;
    return 0;
}