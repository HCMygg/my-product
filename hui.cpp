#include<bits/stdc++.h>
using namespace std;
bool pan(int a);
int main()
{
    int a,b=0;
    for(a=100;a<=1000;a++)
    {
    if(pan(a))
    {
        b++;
    cout<<a<<setw(4);
    }
    if(a%10==0)
    cout<<endl;    
    }
}
bool pan(int a)
{
   
}