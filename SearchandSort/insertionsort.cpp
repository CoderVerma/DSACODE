#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int curr=a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(curr<a[j])
            {
                a[j+1]=a[j];
            }
            else
            break;
        }
        a[j+1]=curr;
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
    insertionsort(a,n);
    
}