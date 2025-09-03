// User function Template for C++
class Solution {
  public:
    void dfs(vector<vector<pair<int,int>>> &adj, vector<int> &vis, stack<int> &st , int node){
        if(vis[node]) return;
        vis[node] = 1;
        for(auto i : adj[node]){
            if(!vis[i.first]) dfs(adj , vis , st , i.first);
        }
        st.push(node);
    }
    vector<int> findTopoSortOrder(vector<vector<pair<int,int>>> &adj , int V){
        stack<int> st;
        vector<int> vis(V);
        for(int i = 0 ; i < V;i++) if(!vis[i]) dfs(adj , vis , st , i);
        vector<int> topoSortOrder;
        while(!st.empty()){
            topoSortOrder.push_back(st.top());
            st.pop();
        }
        return topoSortOrder;
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        stack<int> st;
        vector<vector<pair<int,int>>> adj(V);
        for(auto i : edges){
            adj[i[0]].push_back({i[1],i[2]});
        }
        vector<int> topoSortOrder = findTopoSortOrder(adj , V);
        vector<int> shortestDistance(V , INT_MAX);
        shortestDistance[0] = 0;
        for(int i = 0 ;i<V;i++){
            int vertex = topoSortOrder[i];
            int distance = shortestDistance[vertex];
            if(distance!=INT_MAX){
                for(auto i: adj[vertex]){
                    shortestDistance[i.first] = min(shortestDistance[i.first] , distance + i.second);
                }
            }
        }
        for(int i =0 ;i < V;i++) if(shortestDistance[i] == INT_MAX) shortestDistance[i]=-1;
        return shortestDistance;
    }
};
