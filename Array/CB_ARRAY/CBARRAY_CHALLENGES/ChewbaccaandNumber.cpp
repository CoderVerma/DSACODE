#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s;
    cin>>s;

    int f=s[0]-'0';
    if(f==9 || f<5)
    {
        s[0]=f+'0';
    }
    else
    {
        if(f>4)
        {
            s[0]=(f-9)+'0';
        }
    }

    for(int i=1;i<s.size();i++)
    {
        int a=s[i]-'0';
        if(a<5 || a==0 )
        continue;
        else
        {
            s[i]=(9-a)+'0';
        }
    }
    cout<<s;
}