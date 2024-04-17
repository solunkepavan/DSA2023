#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> shortestPath(vector<pair<int,int>> edges, int n, int m, int s, int t){
    
    //create adj list
    unordered_map<int, list<int>> adj;

    for(int i = 0; i<m; i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //do bfs
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    queue<int> q;
    q.push(s);

    parent[s] = -1;
    visited[s] = true;

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto i: adj[front]){
            if(!visited[i]){
                visited[i] = true;
                parent[i] = front;
                q.push(i);
            }
        }
    }

    //prepare shortest path
    vector<int> ans;
    int currNode = t;
    ans.push_back(t);

    while(currNode != s){
        currNode = parent[currNode];
        ans.push_back(currNode);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n, m, s, t;
    cout << "Enter number of nodes (n): ";
    cin >> n;
    cout << "Enter number of edges (m): ";
    cin >> m;

    vector<pair<int, int>> edges(m);
    cout << "Enter edges in the format (u v):" << endl;
    for (int i = 0; i < m; i++) {
        cin >> edges[i].first >> edges[i].second;
    }

    cout << "Enter source node (s): ";
    cin >> s;
    cout << "Enter target node (t): ";
    cin >> t;

    vector<int> path = shortestPath(edges, n, m, s, t);

    cout << "Shortest Path from " << s << " to " << t << " is:" << endl;
    for (int node : path) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
