#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
bool mycompare(string x,string y)
{
 string xy=x.append(y);
 string yx=y.append(x);
 return xy.compare(yx)>0?1:0;
}
void printlargest(vector<string>a)
{
    sort(a.begin(),a.end(),mycompare);
    for(auto x:a)
    cout<<x;
    cout<<endl;
}

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<string>a;
        int n;cin>>n;
        for(int i=0;i<n;i++)
        {
            string s;cin>>s;
            a.push_back(s);
        }
        printlargest(a);
    }
}