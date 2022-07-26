#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int partition(vector<int> &array, int low, int high){
    int pivot=array[high];

    int i=(low-1);
    for(int j=low; j<high;j++)
    {
        if(array[j]<=pivot)
        {
            i++;
            swap(array[j], array[i]);
        }
    }
    swap(array[i+1], array[high]);
    return (i+1);
}
void quicksort(vector<int> &array, int low, int high){
    if(low<high)
    {
        int pi=partition(array, low, high);
        quicksort(array, low, pi-1);
        quicksort(array, pi+1, high);
    }
}

int main()
{
    vector<int> array={8, 7, 6, 1, 0, 9, 2};
    
    int highindex=(array.size()-1);
    quicksort(array, 0, highindex);
    for(int i=0; i<=highindex; i++)
    {
        cout<<array[i]<<"\n";
    }


    return 0;
}