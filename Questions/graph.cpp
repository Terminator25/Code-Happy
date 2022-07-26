#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[], int arr[])
{

}

int main()
{
    int nodes, edges;
    cin >> nodes;
    cin >> edges;
    int temp=edges;
    vector <int> graph[nodes+1];
    while(temp--)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);

    }
    cout << endl;

    for(int i=1; i<=nodes; i++)
    {
        cout << i<< "->";
        for(int &x: graph[i])
        {
            cout << x << ' ';
        }
        cout << endl;
    }    
    int visited[nodes+1];

}