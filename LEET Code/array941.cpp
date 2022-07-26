#include <iostream> 
#include <vector> 

using namespace std;
 bool validMountainArray(vector<int>& arr){
     int size=arr.size();
     int i;
     while ((i+1) < size and arr[i]<arr[i+1])
     {
         i=i+1;
     }
     if (i==0 || i==size-1)
        return false;
     while ((i+1)< size and arr[i]>arr[i+1])
     {
         i=i+1;
     }
     return i==size-1;


 }

int main()
{
    vector<int> arr={0,1,2,0};
    bool value = validMountainArray(arr);
    cout<< value;
    return 0;
}