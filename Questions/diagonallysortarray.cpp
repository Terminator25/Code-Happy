#include "bits/stdc++.h"
using namespace std;

void printElement(vector<vector<int> >& arr)
{
 
    // Traverse the 2D vector
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int> > arr= { { 10, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    int row = arr.size();
    int col = arr[0].size();
    
    vector<int> Neg[row];
    vector<int> Pos[col];
        for (int i = 0; i < row; i++) 
        {
            for (int j = 0; j < col; j++) 
            {
 
                if (j < i) {
                    Neg[i - j].push_back(arr[i][j]);
                }
 
                else if (j > i) {
                    Pos[j - i].push_back(arr[i][j]);
                }
 
                else {
                    Pos[0].push_back(arr[i][j]);
                }
            }
        }
        for(int i=0; i<Neg[2].size();i++)
            cout<< Neg[2][i]<<" ";



    return 0;
}