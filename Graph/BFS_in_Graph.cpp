#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>> &adj, vector<bool>& visited, vector<int>& ans, int node, int& n){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int front = q.front();
        ans.push_back(front);
        q.pop();

        for(int i = 0; i < adj[front].size(); i++){
            int curr_node = adj[front][i];
            if(!visited[curr_node]){
                q.push(curr_node);
                visited[curr_node] = true;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<bool> visited(n + 1, false);
    vector<int> ans;
    bfs(adj, visited, ans, 0, n);
    return ans;
}

int main(){
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    vector<vector<int>> adj(n + 1);
    cout << "Enter the edges (u v):" << endl;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // Remove this line if the graph is directed
    }

    vector<int> result = bfsTraversal(n, adj);

    cout << "BFS Traversal:" << endl;
    for(int node : result){
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
