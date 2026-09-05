#include<bits/stdc++.h>
using namespace std; 
void invision(char *b,int c)
{
    for(int i=0;i<=c/2;i++)
    {
        swap(*(b+i),*(b+(c-i-1)));
    }
}
int main()
{
    string a;
    getline(cin,a);
    char *b;
    b=&a[0];
    int c;
    c=strlen(b);
    invision(b,c);
    cout<<b;
}