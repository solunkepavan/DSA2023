#include <bits/stdc++.h> 

using namespace std;

void topoSort(int node, vector<bool>& visited, stack<int>& s,
                    unordered_map<int, list<int>>& adj){
           
    visited[node] = true;

    //calling for all the neighbours of node
    for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
            topoSort(neighbour, visited, s, adj);
        }
    }

    //while returning, pushing that node into the stack
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>>& edges, int v, int e) {

    //creating adjacency list
    unordered_map<int, list<int>> adj;

    for(int i = 0; i < e; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    //creating vector to keep track of visited vertex
    vector<bool> visited(v, false);

    //using a data structure stack
    stack<int> s;

    //for each vertex calling the function
    for(int i = 0; i < v; i++){
        if(!visited[i]){
            topoSort(i, visited, s, adj);
        }
    }

    //storing the sorted vertex in ans vector
    vector<int> ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}

int main() {
    int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<vector<int>> edges(e, vector<int>(2));

    cout << "Enter the edges (from, to):" << endl;
    for(int i = 0; i < e; i++){
        cin >> edges[i][0] >> edges[i][1];
    }

    vector<int> sortedVertices = topologicalSort(edges, v, e);

    cout << "Topological sort order:" << endl;
    for(int vertex : sortedVertices){
        cout << vertex << " ";
    }
    cout << endl;

    return 0;
}
