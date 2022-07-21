#include<iostream>
using namespace std;
int majorityele(int a[],int n)
{
    int cnt=0;int m;

    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            m=a[i];
            cnt++;
        }
        else
        {
            if(m==a[i])
            {
                cnt++;
            }
            else cnt--;
        }
    }
    int cntm=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        cntm++;
    }

    if(cntm>n/2)
    return m;
    else
    return -1;
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
    cout<<majorityele(a,n);
}