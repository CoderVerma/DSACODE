#include<iostream>
#include<string.h>
#include<array>
using namespace std;
int length(char str[])
{
    int cnt=0;
    for(int i=0;str[i]!='\0';i++)
    {
     cnt++;
    }
    return cnt;
}
bool palindrome(char str[])
{
    int start=0;int end=length(str)-1;
    while (start<=end)
    {
        /* code */
        if(str[start]!=str[end])
        return false;
        start++;end--;
    }
    return true;
}

int main()
{
    int n=1e6;
    char str[n];
    cin>>str;
    cout<<palindrome(str);

}