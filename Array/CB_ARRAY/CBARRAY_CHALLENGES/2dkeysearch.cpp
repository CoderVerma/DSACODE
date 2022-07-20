#include<iostream>
using namespace std;
void matrixsearch(int **arr,int n,int m,int key)
{
    for(int row=0;row<n;)
    {
        for(int col=m-1;col>=0 && row<n;)
        {
            if(arr[row][col]==key)
            {
                cout<<1<<endl;
                return ;
            }
            else if(arr[row][col]>key)
            col--;
            else
            row++;
        }
    }
    cout<<-1<<endl;
    return;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int **arr=new int *[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[m];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;cin>>key;
    matrixsearch(arr,n,m,key);
    for(int i=0;i<n;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

}