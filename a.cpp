#include<iostream>
using namespace std;
long long jiecheng(int a)
{
    int b,c=1;
    for(b=2;b<=a;b++)
    c*=b;
    return c;
}
int main()
{ 
    int g,s,b;
    
    long long shu,i;
    for(i=100;i<=999;i++)
    {
    g=i%10;
    s=(i/10)%10;
    b=i/100;
        if(jiecheng(g)+jiecheng(s)+jiecheng(b)==i)
        cout<<i;
    }
}