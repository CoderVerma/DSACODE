#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n=abs(a-b);

    int temp[n+1]={0};

    for(int i=a;i<=b;i++)
    {
        if(i%2==0 or i%5==0)
        {
            temp[i-a]++;
        }
    }
    for(int i=a;i<=b;i++)
    {
        if(temp[i-a]==1)
        cout<<i<<" ";
    }

}