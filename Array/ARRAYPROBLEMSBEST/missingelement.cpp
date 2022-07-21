#include<iostream>
using namespace std;
int missingnum(int a[],int n)
{
    int x1=1;int x2=a[0];
    for(int i=2;i<n+2;i++)
    {
        x1=x1 ^ i;
    }
    for(int i=1;i<n;i++)
    {
        x2=x2 ^ a[i];
    }
    return x1 ^ x2;
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<missingnum(a,n);
}