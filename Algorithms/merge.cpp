#include <bits/stdc++.h>
using namespace std;
//Merge two sorted arrays
vector<int> merge(vector<int> A, vector<int> B){
    int sizeA=A.size();
    int sizeB=B.size();
    int iterateA=0;
    int iterateB=0;
    vector<int> result;
    while(iterateA<sizeA && iterateB<sizeB)
    {
        if(A[iterateA]<B[iterateB])
            result.push_back(A[iterateA++]);
        
        else
            result.push_back(B[iterateB++]);
    }

    for(;iterateA < sizeA; iterateA++)
        result.push_back(A[iterateA]);

    for(;iterateB < sizeB; iterateB++)
        result.push_back(B[iterateB]);

    return result;
}

int main()
{
    vector<int> first_list={1, 2, 7, 100};
    vector<int> second_list={4, 5, 11, 320};
    vector<int> merged1= merge(first_list, second_list);
    vector<int> third_list={3, 4, 5, 33, 50, 1000};
    vector<int> merged2= merge(merged1, third_list);

    for(auto it=merged2.begin(); it!=merged2.end(); it++)
        cout<<*it<<"\n";
    return 0;

}