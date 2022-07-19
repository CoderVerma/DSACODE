#include<iostream>
using namespace std;
void readline(char a[],int maxlen,char delim)
{
    int i=0;
    char ch=cin.get();
    while(ch!=delim)
    {
        a[i]=ch;
        i++;

        if(i==maxlen)
        break;
        ch=cin.get();   
    }
    a[i]='\0';
    return ;
}

int main()
{
    char a[1000];
    readline(a,1000,'$');
    cout<<a;
    return 0;
}
// we can use built in method that is cin.getline()
// it works exactly the same