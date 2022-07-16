#include<iostream>
#include<climits>
using namespace std;
void sort012(int a[],int n)
{
    int curr=0,zeropos=0,twopos=n-1;
    while(curr<=twopos)
    {
        if(a[curr]==0)
        {
            swap(a[curr],a[zeropos]);
            curr++;
            zeropos++;

        }
        else if(a[curr]==1)
        {
            curr++;
        }
        else
        {
            swap(a[curr],a[twopos]);
            twopos--;
        }
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
sort012(a,n);

for(int x:a)
{
    cout<<x<< " ";
}

}