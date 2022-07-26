#include <bits/stdc++.h>

using namespace std; 

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array

    
    int majorityElement(int a[], int size)
    {
        int frequent;
        int freq[size+1]={0};
        for(int i=0; i<=size;i++)
        {
            freq[a[i]]+=1;   
        }
        frequent= distance(freq ,max_element(freq, freq + size + 1));
        return frequent;
    }
};

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}