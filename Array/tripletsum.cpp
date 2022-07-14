#include<iostream>
#include<climits>
using namespace std;
void sort01(int a[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]==0)
        i++;
        else if(a[j]==1)
        j--;
        else if(a[i]>a[j])
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(int x=0;x<n;x++)
    {
        cout<<a[x]<<" ";
    }
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
    sort01(a,n);
}

