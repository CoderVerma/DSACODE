#include<iostream>
using namespace std;
int a[1000000],l[1000000],r[1000000];
int main()
{
    // int size=1e6;
    
    int n,i,j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    l[0]=a[0];r[n-1]=a[n-1];
    for(int i=1;i<n;i++)
    {
        l[i]=max(l[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        r[i]=max(r[i+1],a[i]);
    }
    int water=0;
    for(int i=0;i<n;i++)
    {
        water+=min(l[i],r[i])-a[i];
    }
    cout<<water;
    return 0;

}