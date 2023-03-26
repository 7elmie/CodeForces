#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int n,m,a;
    long long p,q;

    cin>>n>>m>>a;

    if(m%a==0)
    {
        p = m/a;
    }
    else
    {
        p = (m/a) + 1;
    }

    if(n%a==0)
    {
        q = n/a;
    }
    else
    {
        q = (n/a) + 1;
    }

    cout<<p*q;
}
 
