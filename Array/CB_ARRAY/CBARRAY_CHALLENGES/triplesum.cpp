#include<iostream>
#include<algorithm>
using namespace std;
void tripletsum(int a[],int n,int key)
{
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
    int j=i+1,k=n-1;
    while(j<k)
    {
        if(a[i]+a[j]+a[k]==key)
        {
            cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
            j++;k--;
        }
        else if(a[i]+a[j]+a[k]<key)
        {
            j++;
        }
        else k--;
    }
}
}

int main()
{
    int n;
    cin>>n;
    int a[1005];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;cin>>key;
    tripletsum(a,n,key);
}