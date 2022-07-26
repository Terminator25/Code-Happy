#include <iostream> 
#include <vector> 
using namespace std;

// void rotatebyone(vector<int>& array, int arraysize){

//     int lastelement=array[arraysize-1];

//     for(int i=arraysize-2; i>=0; i--){
//         array[i+1]=array[i];
//     }
//     array[0]=lastelement;

// }

// void rotate(vector<int>& array, int rotations, int arraysize)
// {
//     int temp[rotations];
//     for (int i=0; i<rotations; i++)
//     {
//         temp[i] = array[arraysize-rotations+i];
//     }

//     for (int i=arraysize- rotations -1; i>=0; i--)
//     {
//         array[i+rotations]=array[i];
//     }
//     for (int i=0; i<rotations;i++)
//     {
//         array[i]=temp[i];
//     }

// }

void reverse(vector<int>& array, int low, int high)
{
    for(int i=low, j=high;i<j;i++, j--)
    {
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}

void rotate(vector<int>& array, int rotations)
{
    int sizeofarray=(int) array.size();
    reverse(array, sizeofarray-rotations, sizeofarray-1);
    reverse(array, 0, sizeofarray-rotations-1);
    reverse(array, 0, sizeofarray-1);
}