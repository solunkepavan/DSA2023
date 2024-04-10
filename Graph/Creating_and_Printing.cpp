#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges) {
    
    vector<int> ans[n];

    // ans array will store all adjacent nodes corresponding on indexes
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
    }

    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
        adj[i].push_back(i);

        // entering neighbours
        for (int j = 0; j < ans[i].size(); j++) {
            adj[i].push_back(ans[i][j]);
        }
    }

    return adj;
}

int main() {
    int n, m;
    cout << "Enter the number of nodes (n): ";
    cin >> n;

    cout << "Enter the number of edges (m): ";
    cin >> m;

    vector<vector<int>> edges(m, vector<int>(2));
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    vector<vector<int>> adj = printAdjacency(n, m, edges);

    cout << "Adjacency list:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
