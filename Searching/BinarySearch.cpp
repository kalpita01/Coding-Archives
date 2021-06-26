#include<iostream>
using namespace std;
int binaryS(int a[], int n, int l, int r, int x)
{
    while(l<=r)
    {
        int m = l+((r-1)/2);
        if(a[m] == x)
            return m;
        else if(a[m] > x){
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    return -1;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);
    int result = binaryS(a,n,0,n-1,9);
    cout<<result<<endl;
    return 0;
}