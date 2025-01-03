//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void solver(vector<vector<int>> &adj,unordered_map<int,int> &mp , map<int,vector<int>> &v, vector<int> &temp,int i,int j){
        if(i>= temp.size()) return;
        if(mp.find(temp[i])== mp.end()){
            v[j].push_back(temp[i]);
            //cout<<temp[i]<<" ";
            mp[temp[i]]=1;
            solver(adj , mp,v,adj[temp[i]] , 0,j+1);
        }
        //cout<<endl;
        solver(adj,mp,v,temp,i+1,j);
    }
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        vector<int> ans,vis(adj.size());
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            int n= adj[top].size();
            for(int j=0;j<n;j++){
                if(!vis[adj[top][j]])    q.push(adj[top][j]);
                vis[adj[top][j]] =1;
            }
            ans.push_back(top);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends