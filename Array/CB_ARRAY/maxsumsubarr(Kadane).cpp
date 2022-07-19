#include<iostream>
#include<climits>
using namespace std;
void maxsubarrsum(int a[],int n)
{
  int ms=0,cs=0;
  for(int i=0;i<n;i++)
  {
    cs=cs+a[i];
    if(cs<0)
    {
        cs=0;
    }
    ms=max(cs,ms);
  }    
   cout<<"Maximum sum is "<<ms;
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