//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int n = mat.size();
        k=k%mat[0].size();
        //cout<<k<<endl;
        for(int i=0;i<n;i++){
            vector<int> v;
            for(int j=k;j<mat[i].size();j++){
                v.push_back(mat[i][j]);
            }
            //int s = v.size();
            for(int j=0;j<k;j++) v.push_back(mat[i][j]);
            for(int j=0;j<mat[i].size();j++){
                mat[i][j] = v[j];
            }
            
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends