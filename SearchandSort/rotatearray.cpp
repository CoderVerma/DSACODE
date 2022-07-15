#include<iostream>
using namespace std;
void reverse(int a[],int st,int en)
{
    while(st<en)
    {
     int temp=a[st];
     a[st]=a[en];
     a[en]=temp;
     st++;en--;   
    }

        
} 

void rotate(int a[],int n,int d)
{
    reverse(a,0,n-1);
    reverse(a,0,n-d-1);
    reverse(a,n-d,n-1);
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
int d;cin>>d;
d=d%n;
rotate(a,n,d);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}