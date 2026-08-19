#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int a[n];
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       bitset<32>s[i](a[i]);
    }
    for(int i=0;i<n;i++)
    {
        s[i].erase(remove(s[i].begin(), s[i].end(), '0'), s[i].end());
    }
   for(int i=0;i<n;i++)
    {
       cout<<s[i]<<" ";
    }
    
}