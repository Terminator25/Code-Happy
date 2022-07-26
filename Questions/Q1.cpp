//https://codeforces.com/contest/1367/problem/B

#include <bits/stdc++.h>
using namespace std;

void evenarray(vector<int> array)
{
    int a=0, b=0;
    for (int i=0; i< array.size();i++)
    {
        if (array[i]%2 != i%2)
        {
            if (i%2==0)
                a++;
            else
                b++;
        }
    }
    if (a!=b)
    cout << "-1";
    else
    cout << a;
    
}

int main()
{
    vector<int> array;
    array={4,9,2,1,11,3,0};
    evenarray(array);
    
    return 0;
}