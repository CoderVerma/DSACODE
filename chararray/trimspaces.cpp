#include<iostream>
using namespace std;
void trimspaces(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        {
            for(int j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
        }
        else i++;
    }
    
}

int main()
{
    int n=1e6;
    char a[n];
    cin.getline(a,1e6);
    trimspaces(a);
    cout<<a<<endl;
}