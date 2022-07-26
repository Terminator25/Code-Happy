#include <iostream> 
#include <vector> 

using namespace std;

int removeDuplicates(vector<int>& nums)
{
    int index=1;
    for(int i=0; i<nums.size() - 1;i++){

        if (nums[i]!=nums[i+1])
            nums[index++]=nums[i+1];
        }
    return index;
}

int main()
{
    vector<int> nums={1,1,1,3,4,5,6,6,6};
    int size=removeDuplicates(nums);
    cout<< size<<" ";
     for (auto i = nums.begin(); i != nums.end(); ++i)
        cout << *i << " ";

}