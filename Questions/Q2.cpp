//https://practice.geeksforgeeks.org/problems/game-with-nos3123/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays
#include <bits/stdc++.h>
using namespace std;

int* game_with_number(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        if(i==(n-1))
        break;
        arr[i]=arr[i]^arr[i+1];
    }
}

int main()
{
    int array[]= {10, 11, 1, 2, 3};
    game_with_number(array, 5);
    for(int i=0; i<5; i++)
    {
        cout << array[i]<<" ";
    }
    
    return 0;
}