#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=a[i];int minidx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                minidx=j;
            }
        }
        int temp=a[i];
        a[i]=a[minidx];
        a[minidx]=temp;
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
    selectionsort(a,n);
    for(int x:a)
    {
        cout<<x<<" ";
    }
}