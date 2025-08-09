class Solution {
  public:
    void dfs(unordered_map< int , vector<int>> &edges  , stack<int> &st , vector<int> &vis , int val){
        vis[val] =1;
        
        
        
        
        
        
        
        
        for(auto it : edges[val]){
            if(!vis[it]) dfs(edges , st , vis , it);
        }
        st.push(val);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> ans , vis(V);
        unordered_map<int,vector<int>> mp;
        stack<int> st;
        for(int i = 0 ; i <  edges.size() ; i++){
            mp[edges[i][0]].push_back(edges[i][1]);
        }
        for(int i = 0 ; i < V;i++){
            if(!vis[i]) dfs(mp , st , vis , i);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};