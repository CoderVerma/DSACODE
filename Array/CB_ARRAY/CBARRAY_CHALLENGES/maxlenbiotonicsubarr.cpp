#include<climits>
#include<iostream>
using namespace std;
int bitonic(int a[],int n)
{
    int inc[n],dec[n];
    inc[0]=1;dec[n-1]=1;
    for(int i=1;i<n;i++)
    {
        inc[i]=(a[i]>a[i-1])?inc[i-1]+1:1;
    }
    for(int i=n-2;i>=0;i--)
    {
        dec[i]=(a[i]>a[i+1])?dec[i+1]+1:1;
    }
    int max=inc[0]+dec[0]-1;

    for(int i=1;i<n;i++)
    {
        if(inc[i]+dec[i]-1>max)
        max=inc[i]+dec[i]-1;
    }
    return max;
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
    cout<<bitonic(a,n);
}
