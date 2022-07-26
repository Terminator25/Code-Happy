#include <bits/stdc++.h>
using namespace std;

long long findpower(long long fact[], long long power[])
{
    long long mid=(0+100000)/2;
    while (fact[mid]<power[mid])
    {

    }
}

int main()
{
    int base=2;
    long long fact[100000];
    fact[0]=1;
    for(int i=1;i<100000; i++)
    {
        fact[i]=fact[i-1]*fact[i];
    }
    long long power[1000000];
    power[0]=1;
    for(int i=1; i<1000000;i++)
    {
        power[1]=power[i-1]*base;
    }
}