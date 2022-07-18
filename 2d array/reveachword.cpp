#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

void reverse(char a[],int st,int en)
{
    int i=st,j=en;
    while(i<=j)
    {
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;j--;
    }
}

void revwrd(char a[])
{
    int size=strlen(a);
    int st=0;

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            reverse(a,st,i-1);
            st=i+1;
        }

        else if(i==size-1)
        reverse(a,st,i);
    }
}
int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    revwrd(str);
    cout << str;
}