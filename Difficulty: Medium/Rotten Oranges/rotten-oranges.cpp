//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>>& mat) {
        // Code here
        queue<pair<int,int>> q;
        int ans=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] == 2) q.push({i,j});
            }
        }
        while(!q.empty()){
            int n = q.size();
            for(int k=0;k<n;k++){
                int i=q.front().first , j =q.front().second;
                if(i-1>=0 and mat[i-1][j]==1){
                    mat[i-1][j]=2;
                    q.push({i-1,j});
                }
                if(i+1<mat.size() and mat[i+1][j]==1){
                    mat[i+1][j]=2;
                    q.push({i+1,j});
                }
                if(j+1 < mat[0].size() and mat[i][j+1]==1){
                    mat[i][j+1] =2;
                    q.push({i,j+1});
                }
                if(j-1 >=0 and mat[i][j-1]==1){
                    mat[i][j-1] = 2;
                    q.push({i,j-1});
                }
                q.pop();
            }
            ans++;
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] == 1) return -1;
            }
        }
        if(ans==0) return 0;
        return ans-1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(mat);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends