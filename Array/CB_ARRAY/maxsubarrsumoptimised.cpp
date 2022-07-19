#include<iostream>
#include<climits>
using namespace std;
void maxsubarrsum(int a[],int n)
{
    int maxsum=INT_MIN;
    int currsum=0;
    int left=-1,right=-1;
    int cummsum[1000]={0};
    for(int i=1;i<n;i++)
    {
        cummsum[i]=a[i]+cummsum[i-1];
    }    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currsum=cummsum[j]-cummsum[i-1];
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