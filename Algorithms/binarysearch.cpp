#include <bits/stdc++.h>
using namespace std;
//Input sorted array and value to find
int binarysearch(vector<int> nums, int target){
    int vector_size=nums.size();
    int last=vector_size-1;
    int first= 0;
    int middle;
    for(int i=0; i<log2(vector_size)+1;i++){
        middle=(last+first)/2;

        if(nums[middle]==target)
        return middle;

        if(nums[middle]<target)
        first=middle;   

        else
        last=middle;     
    }
    return -1;
}

int main()
{
    vector<int> nums={1, 2, 3, 4, 5, 6, 7};
    int target;
    cout<<"Input the value to find in array:";
    cin>>target;
    int index=binarysearch(nums, target);
    cout<<"Index of target value:"<<index;
    return 0;
}

