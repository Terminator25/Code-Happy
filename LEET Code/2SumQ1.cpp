#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> nums, int target){
    unordered_map<int, int> pair;
    for (int i = 0; i < nums.size(); i++)
    {
        //If target value not found add the current array element and its index to the hash map
        if(pair.find(target-nums[i])==pair.end())
        {
            pair[nums[i]]=i;
        }
        //If found return the index of found element and current value
        else
        {
            return{pair[target-nums[i]],i};
        }
    }
    //If no such pair is found return -1,-1
    return{-1,-1};  

}

int main()
{
    vector<int> nums={2, 7, 11, 15};
    int target =17;
    vector <int> solution;
    solution=twosum(nums, target);
    cout<<solution[0]<<":"<<solution[1];
    return 0;
    
}