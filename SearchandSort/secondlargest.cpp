#include<iostream>
#include<climits>
using namespace std;
int scnlar(int a[],int n)
{
    int l=a[0];int sl=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=l)
        {
            if(a[i]>l)
            {
                sl=l;
                l=a[i];
            }
        }
        else if(a[i]>sl)
        {
            sl=a[i];
        }
    }
    return sl;

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
cout<<scnlar(a,n);

}