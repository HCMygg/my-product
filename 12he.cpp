#include<bits/stdc++.h>
using namespace std;
int suan(int b)
{
    int he=0;
    while(b>0)
        {
        he+=b%10;
        b/=10;
        }
        if(he==13)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
int main()
{
    int i,he=0,a;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(suan(i)==1)
        {
            he++;
        }
    }
    cout<<he;
}