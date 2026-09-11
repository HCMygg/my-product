#include<bits/stdc++.h>
using namespace std;
string gaojing-(string a,string b)
{
    char answer[max(a.size(),b.size())],bjian[max(a.size(),b.size())],jian[max(a.size(),b.size())];
    for(int i=0;i<max(a.size(),b.size());i++)
    {
        answer[i]=bjian[i]=jian[i]='0';
    }
    for(int i=0;i<a.size();i++)
    {
        bjian[a.size()-i-1]=a[i];
        jian[b.size()-i-1]=b[i];
    }

}
string gaojing+(string a,string b)
{

}
int main()
{
    string a,b,c;
    cout<<"+or-";
    cin>>c;
    if(c=='+')
    {
        cout<<gaojing+(a,b)<<endl;
    }
    else
    {
        cout<<gaojing-(a,b)<<endl;
    }
}