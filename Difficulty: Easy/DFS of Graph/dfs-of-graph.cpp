//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void solver(vector<vector<int>> &adj,unordered_map<int,int> &mp , vector<int> &v , vector<int> &temp,int i){
        if(i>= temp.size()) return;
        if(mp.find(temp[i])== mp.end()){
            v.push_back(temp[i]);
            mp[temp[i]]=1;
            solver(adj , mp,v,adj[temp[i]] , 0);
        }
        solver(adj,mp,v,temp,i+1);
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        vector<int> v;
        unordered_map<int,int> mp;
        v.push_back(0);
        mp[0]=1;
        solver(adj,mp,v,adj[0],0);
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends