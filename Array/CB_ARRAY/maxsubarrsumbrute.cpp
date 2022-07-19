#include<iostream>
#include<climits>
using namespace std;
void maxsubarrsum(int a[],int n)
{
    int maxsum=INT_MIN;
    int currsum;
    int left=-1,right=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currsum=0;
            for(int k=i;k<=j;k++)
            {
                currsum+=a[k];
            }
            if(currsum>maxsum)
            {
                maxsum=currsum;
                left=i;right=j;
            }
        }
    }
    cout<<"Maximum Subarray sum is "<<maxsum;
    cout<<"\n"<<"Subarray is ";
    for(int i=left;i<=right;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxsubarrsum(a,n);
}