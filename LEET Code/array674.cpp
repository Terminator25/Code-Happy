#include <iostream> 
#include <vector> 
#include <unordered_map>

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size();
    int n2=nums2.size();
    vector<int> ans;

    unordered_map<int, int> hash;

    for(int i=0; i<n1; i++)
    {
        hash[nums1[i]]++;
    }

    for(int i=0; i<n2; i++)
    {
        if (hash[nums2[i]]>1)
            ans.push_back(nums2[i]);
    }
    return ans;
}

int main(){
    vector<int> nums1, nums2, result;
    nums1={1,1,2,3,4};
    nums2={1,2,3};
    result=intersect(nums1, nums2);

    for(auto i=0; i<result.size();i++)
    {
        cout << result[i];
    }

        return 0;
}