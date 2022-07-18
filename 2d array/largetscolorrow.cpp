#include<iostream>
#include<climits>
using namespace std;
void findlargest(int **a,int n,int m)
{
    int rls=INT_MIN;int ridx=0;int rcs=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            rcs+=a[i][j];
        }
        if(rls<rcs)
        {
            rls=rcs;
            ridx=i;
        }
        rcs=0;
    }
    int cls=INT_MIN;int cidx=0;int ccs=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            ccs+=a[j][i];
        }
        if(cls<ccs)
        {
            cls=ccs;
            cidx=i;
        }
        ccs=0;
    }

    if(rls>=cls)
    {
        cout << "row" << ' ' << ridx << ' ' << rls << endl;

    }
    else
    {
        cout << "col" << ' ' << cidx << ' ' << cls << endl;

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
    findlargest(input,row,col);
}