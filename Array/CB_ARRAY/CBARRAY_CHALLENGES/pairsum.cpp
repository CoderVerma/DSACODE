#include<iostream>
#include<algorithm>
using namespace std;
void pairsum(int a[],int n,int key)
{
    int i=0,j=n-1;
    sort(a,a+n);
    while(i<j)
    {
        if(a[i]+a[j]==key)
        {
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;j--;
        }
        else if(a[i]+a[j]<key)
        {
            i++;
        }
        else j--;

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
    int key;cin>>key;
    pairsum(a,n,key);
}