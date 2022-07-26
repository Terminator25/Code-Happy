#include <bits/stdc++.h>
int power(int base, int exp)
{
    if(exp==0)
    return 1;
    if(exp==1)
    return base;

    int tmp=power(base, exp/2);
    int result = tmp*tmp;
    if (exp%2==1)
    result*=base;
    return result;
    
}