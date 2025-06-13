class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        int n = adj.size();
        vector<int> ans(n , -1);
        vector<bool> vis(n , false);
        queue<int> q;
        q.push(src);
        vis[src] = true;
        ans[src] = 0;
        while(!q.empty()){
            int v = q.front();
            for(auto i : adj[v]){
                if(!vis[i]){
                    q.push(i);
                    vis[i] = true;
                    ans[i] = ans[v] + 1;
                }
            }
            q.pop();
        }
        return ans;
    }
};