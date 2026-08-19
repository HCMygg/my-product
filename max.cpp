#include<bits/stdc++.h>
using namespace std;
int max(int a[],int b)
{
    int max,i=0;
    max=0;
    for(i=1;i<b;i++)
    {
        if(a[i]>a[max])
        max=i;
    }
    return max;
}
int main()
{
    int ma,a;
    cin>>a;
    int i,b[a];
    for(i=0;i<a;i++)
    {
        cin>>b[i];
    }
    ma=max(b,a);
    cout<<b[ma]<<" "<<ma;
}