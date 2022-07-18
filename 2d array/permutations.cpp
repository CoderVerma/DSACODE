#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

bool isPermutation(char s1[],char s2[])
{
    if(strlen(s1)!=strlen(s2))
    return false;
    int sum1=0,sum2=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        sum1+=s1[i];
        sum2+=s2[i];

    }
    if(sum1==sum2)
    return true;
    else 
    return false;
}

int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}