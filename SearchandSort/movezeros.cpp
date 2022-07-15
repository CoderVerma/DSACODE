#include<iostream>
using namespace std;
void push(int a[],int n)
{

 int idx=0;
 for(int i=0;i<n;i++)
 {
    if(a[i]!=0)
    {swap(a[i],a[idx]);
    idx++;}
 }
 for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
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
push(a,n);

}