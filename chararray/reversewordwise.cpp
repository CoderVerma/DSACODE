#include<iostream>
using namespace std;
int length(char a[])
{
    int cnt=0;
    for(int i=0;a[i]!='\0';i++)
    {
        cnt++;
    }
    return cnt;
}

void reverse(char a[],int st,int en)

{
    while(st<=en)
    {
        char temp=a[st];
        a[st]=a[en];
        a[en]=temp;
        st++;en--;
    }
}

void reversewordwise(char a[])
{
    int size=length(a);

    reverse(a,0,size-1);

    int start=0;

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            reverse(a,start,i-1);
            start=i+1;
        }
        else if(i==size-1)
        reverse(a,start,i);
    }
}
int main()
{
    int n=1e4;
    char a[n];
    cin.getline(a,n);
    reversewordwise(a);
    cout<<a<<endl;
}