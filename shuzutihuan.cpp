#include<bits/stdc++.h>
using namespace std;
void copy(int a[],int b[],int size,int m);
int main()
{
   int i,n,m,size;
    cin>>n>>m>>size;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    copy(a,b,size,m);
}
void copy(int a[],int b[],int size,int m)
{
    int i;
    for(i=0;i<size;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<m;i++)
    {
        cout<<b[i]<<endl;
    }

}