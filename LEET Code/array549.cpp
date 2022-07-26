#include <iostream> 
#include <vector> 

using namespace std;

int singlenumber(vector<int>& nums)
{
    int a=0;
    for(auto i=0; i<nums.size(); i++)
    {
        a^=nums[i];
    }
    return a;
}

int main()
{
    vector<int> num= {1,1,3,3,2};
    int unique;
    unique=singlenumber(num);
    cout << unique;
    return 0;

}