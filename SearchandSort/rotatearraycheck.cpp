#include<iostream>
#include<climits>
using namespace std;
int rotatechk(int a[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        cnt++;
        else 
        return cnt+1;
    }
    return 0;
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
cout<<rotatechk(a,n);

}