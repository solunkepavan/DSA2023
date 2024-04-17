#include <bits/stdc++.h> 
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {

    unordered_map<int, list<pair<int,int>>> adj;

    for(int i = 0; i< edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u,w));
    }

    //creation of distance vector with infinite value
    vector<int> dist(vertices);
    for(int i = 0; i<vertices; i++)
        dist[i] = INT_MAX;
    
    //creation of set on basis of (distance , node)
    set<pair<int, int> > st;

    //initialize distance and set with source node
    dist[source] = 0;
    st.insert(make_pair(0, source));

    while(!st.empty()){

        //fetch the top 
        auto top = *(st.begin());

        int nodeDistance = top.first;
        int topNode = top.second;

        //remove top record now 
        st.erase(st.begin());

        //fetch neighbour of top node
        for(auto neighbour : adj[topNode]){
            if(nodeDistance + neighbour.second < dist[neighbour.first]){

                auto record = st.find(make_pair(dist[neighbour.first], neighbour.first ));

                //if recoord found then erase it 
                if(record != st.end()){
                    st.erase(record);
                }

                // distance update 
                dist[neighbour.first] = nodeDistance + neighbour.second;

                //insert into set
                st.insert(make_pair(dist[neighbour.first], neighbour.first));
            }
        }
    }
    return dist;
}

int main() {
    int vertices, edges, source;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter the source vertex: ";
    cin >> source;

    vector<vector<int>> vec(edges, vector<int>(3));

    cout << "Enter the edges in the format (u v w):" << endl;
    for (int i = 0; i < edges; i++) {
        cin >> vec[i][0] >> vec[i][1] >> vec[i][2];
    }

    vector<int> dist = dijkstra(vec, vertices, edges, source);

    cout << "Shortest distances from source " << source << " are:" << endl;
    for (int i = 0; i < vertices; i++) {
        cout << "Vertex " << i << ": " << dist[i] << endl;
    }

    return 0;
}
