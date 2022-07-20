#include<climits>
#include<iostream>
using namespace std;

int maxsum(int a[],int n)
{
    int ms=INT_MIN;int cs=0;
    for(int i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        cs=0;
        if(cs>ms)
        ms=cs;
    }
    return cs;
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
    cout<<maxsum(a,n);
}
