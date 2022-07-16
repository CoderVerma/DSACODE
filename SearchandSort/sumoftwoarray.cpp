#include<iostream>
#include<climits>
using namespace std;
void sum(int a1[],int n1,int a2[],int n2)
{
    int n=max(n1,n2);
    int sum[n];
    int i=n1-1,j=n2-1,k=n-1;
    int c=0;

    while(k>=0)
    {
        int d=c;

        if(i>=0)
        {
            d+=a1[i];
        }
        if(j>=0)
        {
            d+=a2[j];
        }
        c=d/10;
        d=d%10;
        sum[k]=d;
        i--;j--;k--;
    }
    if(c!=0)
    {
        cout<<c;
    }
    for(int x:sum)
    {
        cout<<x;
    }
}
int main()
{
    int n1;
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++)
{
    cin>>a1[i];
}
int n2;
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++)
{
    cin>>a2[i];
}

sum(a1,n1,a2,n2);

    // for(int x:a)
    // {
    //     cout<<x<< " ";
    // }

}