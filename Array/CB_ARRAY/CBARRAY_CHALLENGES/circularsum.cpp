#include<climits>
#include<iostream>
using namespace std;

int kadane(int a[],int n)
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
    return ms;
}

int maxsum(int a[],int n)
{
    int maxk=kadane(a,n);
    int maxw=0,i;
    for(i=0;i<n;i++)
    {
        maxw=maxw+a[i];
        a[i]=-a[i];
    }
    maxw=maxw+kadane(a,n);
    return(maxw>maxk)?maxw:maxk;
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
