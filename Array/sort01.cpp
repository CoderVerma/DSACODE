#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int val)
{
  int st=0,en=n-1;

  while(st<=en)
  {
    int mid=(st+en)/2;

    if(a[mid]==val)
    return mid;
    else if(a[mid]>val)
    {
        en=mid-1;
    }
    else
    {
        st=mid+1;
    }

  }
  return -1;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int val;cin>>val;
    cout<<binarysearch(arr,n,val);
}