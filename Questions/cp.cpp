#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        int prace1, prace2, arace1, arace2, wincount=2;
        cin >> prace1 >> prace2 >> arace1 >> arace2;
        if (prace1==arace1 || prace1==arace2) wincount--;
        if (prace2==arace1 || prace2==arace2) wincount--;
        cout << wincount;
    }
    return 0;
}
