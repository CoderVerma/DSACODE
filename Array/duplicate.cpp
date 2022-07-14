#include<iostream>
#include<climits>
using namespace std;
void intersect(int a1[],int n,int a2[],int m)
{
  for(int i=0;i<n;i++)
  {
    // bool flag=true;

    for(int j=0;j<m;j++)
    {
        if(a1[i]==a2[j])
        {
            cout<<a1[i]<<" ";
            a2[j]=INT_MIN;
            break;
        }
    }

    // if(flag)
    // return a[i];
  }
//   return -1;    
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a1[n];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    int a2[m];
    for(int i=0;i<m;i++)
    {
        cin>>a2[i];
    }
    intersect(a1,n,a2,m);
}

