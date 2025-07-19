class Solution {
  public:
  
    bool bfs(unordered_map<int, vector<int>> mp , unordered_map<int,bool> &vis ,int v ){
        queue<pair<int,int>> q;
        q.push({v , -1});
        vis[v] = true;
        while(!q.empty()){
            int par = q.front().second , nod = q.front().first;
            // cout<<nod <<" "<<par<<endl;
            for(auto  i :mp[nod]){
                if(vis[i] ){
                    if(i!=par){
                        // cout<<i<<" ";
                        return true;
                    }
                }
                else{
                    q.push({i ,nod});
                    vis[i]=true;
                }
            }
            q.pop();
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        unordered_map<int,bool> vis;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(bfs(mp , vis ,i)) return true;
            }
        }
        return false;
    }
};