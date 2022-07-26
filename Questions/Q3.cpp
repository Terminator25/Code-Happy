//https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&page=1&query=category[]Dynamic%20Programmingpage1category[]Dynamic%20Programming
#include <bits/stdc++.h>
// Approach 1
// int NumberofPath(int a, int b)
// {
//     int S[a+1][b+1];
//     for(int i=0; i<a+1;i++)
//     {
//         S[i][0]=0;
//     }

//     for(int i=0; i<b+1; i++)
//     {
//         S[0][i]=0;
//     }

//     for(int i=1; i<a+1;i++)
//     {
//         S[i][1]=1;
//     }

//     for(int i=1; i<b+1;i++)
//     {
//         S[1][i]=1;
//     }

//     for(int i=2;i<a+1;i++)
//     {
//         for(int j=2; j<b+1;j++)
//         {
//             S[i][j]=S[i-1][j]+S[i][j-1];
//         }
//     }
//     return S[a][b];
// }

//Aproach 2
int dp[100][100];
int solve(int a, int b, int i, int j)
{
    //out of bounds
    if(i>=a || j>=b || i<0 || j<0)
        return 0;

    //value not empty
    if(dp[i][j]!=-1)
        return 1;
    
    //base condition
    if(i==a-1 && j==b-1)
        return dp[i][j];

    return dp[i][j]=solve(a, b, i+1, j) + solve(a, b, i, j+1); 
    
}
int NumberofPath(int a, int b)
{
    memset(dp, -1, sizeof(dp)/sizeof(dp[0][0]));
    int i=0, j=0;
    return solve(a, b, i, j); 
}
int main()
{
    int paths= NumberofPath(3,4);
    std::cout << paths;
}