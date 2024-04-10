#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>

using namespace std;

bool checkCycleDFS(int node, unordered_map<int, bool>& visited, unordered_map<int, bool>& dfsvisited, unordered_map<int, list<int>>& adj) {
    visited[node] = true;
    dfsvisited[node] = true;

    for (auto neighbour : adj[node]) {
        if (!visited[neighbour]) {
            bool CycleDetected = checkCycleDFS(neighbour, visited, dfsvisited, adj);
            if (CycleDetected) {
                return true;
            }
        }
        else if (dfsvisited[neighbour]) {
            return true;
        }
    }

    dfsvisited[node] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>>& edges) {
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
    }

    //call dfs for all components
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisited;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bool CycleFound = checkCycleDFS(i, visited, dfsvisited, adj);
            if (CycleFound) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, e;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<pair<int, int>> edges(e);

    cout << "Enter the edges (from, to):" << endl;
    for (int i = 0; i < e; i++) {
        cin >> edges[i].first >> edges[i].second;
    }

    if (detectCycleInDirectedGraph(n, edges)) {
        cout << "Cycle detected in the directed graph." << endl;
    } else {
        cout << "No cycle detected in the directed graph." << endl;
    }

    return 0;
}
