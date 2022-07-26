#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right; 
    node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};