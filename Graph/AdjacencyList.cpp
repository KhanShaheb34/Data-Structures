#include<bits/stdc++.h>
using namespace std;

vector<int> edges[100];
vector<int> ind[100];

int main()
{
    int node, edge;
    cin >> node >> edge;

    for (int i=0; i<edge; i++)
    {
        int from, to;
        cin >> from >> to;
        edges[from].push_back(to);
        ind[to].push_back(from);
    }

    for(int i=1; i<=node; i++)
    {
        cout << i << ": "; 
        for(long unsigned int j=0; j<edges[i].size(); j++){
            cout << edges[i][j] << " ";
        }
        cout << "\t\tIn: " << ind[i].size() << " Out: " << edges[i].size();
        cout << endl;
    }

}
