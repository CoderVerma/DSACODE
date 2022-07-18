#include<iostream>
#include<climits>
using namespace std;
void waveprint(int **a,int n,int m)
{
   int rs=0,cs=0,re=n-1,ce=m-1;
   int cnt=0;
   while(cnt<n*m)
   {
    for(int i=cs;(i<=ce) && (cnt<n*m);i++)
    {
        cout<< a[rs][i]<<" ";
        cnt++;
    }
    rs++;
    for(int j=rs;(j<=re)&& (cnt<n*m);j++)
    {
        cout<<a[j][ce]<<' ';
        cnt++;
    }
    ce--;
    for(int i=ce;(i>=cs)&& (cnt<n*m);i--)
    {
        cout<<a[re][i]<<' ';
        cnt++;
    }
    re--;
    for(int j=re;(j>=rs)&& (cnt<n*m);j--)
    {
        cout<<a[j][cs]<<' ';
        cnt++;
    }
    cs++;
    
   }    
}

int main()
{
    int row,col;
    cin>>row>>col;

    int **input=new int *[row];
    for(int i=0;i<row;i++)
    {
        input[i]=new int [col];
        for(int j=0;j<col;j++)
        {
            cin>>input[i][j];
        }

    }
    waveprint(input,row,col);
}