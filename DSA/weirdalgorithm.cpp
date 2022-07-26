#include <bits/stdc++.h>
using namespace std;

void weird(int x)
{
    cout << x <<endl;
    while(1)
    {
        if (x%2)
        {
            x=x*3+1;
            cout<< x<<endl;
        }
        else
        {
            x/=2;
            cout<<x<<endl;
        }
        if (x==1)
        break;
    }
}

int main()
{
    int x= 1;
    weird(x);
    return 0;
}