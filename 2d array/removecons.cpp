#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

void removeConsecutiveDuplicates(char input[])
{
    int lastidx=0;

    for(int i=1;input[i]!='\0';i++)
    {
        if(input[lastidx]!=input[i])
        {
            input[++lastidx]=input[i];
        }
    }
    input[lastidx+1]='\0';
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}