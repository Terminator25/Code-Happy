#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, res=0;
    int countzero, countone;
    int arr[100];
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<=31; i++)
    {
        countzero=0;
        countone=0;
        for(int j=0; j<size;j++)
        {
            if(arr[j]&1<<i)
            countone++;
            else
            countzero++;
        }
        int pairs=countzero*countone;
        res+=pairs*(1<<i);
    }
    cout<<res;  
}