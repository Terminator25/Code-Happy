#include <bits/stdc++.h>

using namespace std;

int Q[10];
int front=-1, back=-1;
int n=sizeof(Q)/sizeof(Q[0])-1;

bool isempty(int front, int back)
{
    if (front==-1 && back==-1)
        return true;
    else
        return false;
}

bool isfull(int front ,int back)
{
   
    if ((back+1)%n==front)
        return true;
    else
        return false;
}

void enqueue(int x)
{
    if (isfull(front, back))
        return;

    else if (isempty(front, back))
        front=0, back=0;
    
    else
        back=(back+1)%n;

    Q[back]=x;
}



