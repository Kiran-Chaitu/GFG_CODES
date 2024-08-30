//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<string> ans;
    void solver(vector<vector<int>> &mat, int i, int j,int n, string s,vector<vector<int>> &check){
        if(i<0 || j<0 || i>=n || j>=n) return;
        if(i==n-1 and j==n-1){
            ans.push_back(s);
            return;
        }
        check[i][j]=1;
        if(i>0 and check[i-1][j]==0 and mat[i-1][j]==1 ){
            solver(mat,i-1,j,n,s+'U',check);
        }
        if(i<n-1 and check[i+1][j]==0 and mat[i+1][j]==1){
            solver(mat,i+1,j,n,s+'D',check);
        }
        if(j>0 and check[i][j-1]==0 and mat[i][j-1]==1){
            solver(mat,i,j-1,n,s+'L',check);
        }
        if(j<n-1 and check[i][j+1]==0 and mat[i][j+1]==1){
            solver(mat,i,j+1,n,s+'R',check);
        }
        check[i][j]=0;
        
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        ans.clear();
        if(mat[0][0]==0) return {};
        int n=mat.size();
        if(mat[n-1][n-1]==0) return {};
        string s="";
        vector<vector<int>> check(n,vector<int> (n,0));
        solver(mat,0,0,n,s,check);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends