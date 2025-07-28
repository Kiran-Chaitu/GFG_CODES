class Solution {
  public:
    bool dfs(unordered_map<int,vector<int>> &mp, vector<int> &vis , vector<int> &pathVis , int i){
        if(vis[i]){
            if(pathVis[i]) return true;
            return false;
        }
        vis[i]=1;
        pathVis[i]=1;
        bool temp = false;
        for(auto k : mp[i]){
            temp |= dfs(mp , vis , pathVis , k);
        }
        pathVis[i] = 0;
        return temp;
        
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
        }
        vector<int> vis(V) , pathVis(V);
        for(int i = 0 ; i <V;i++){
            if(!vis[i]){
                if(dfs(mp , vis , pathVis , i)) return true;
            }
        }
        return false;
    }
};