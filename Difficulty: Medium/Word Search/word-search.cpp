//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   bool ans = false;
    void solver(vector<vector<char>> &board , string &word , int i , int j , int ind ,vector<vector<int>> &vis , int n , int m , int len){
        if(i<0 || i >= n ||j<0 || j>=m || vis[i][j] || board[i][j] != word[ind] ) return;
        if(ind == len-1 and board[i][j] == word[ind]){ 
            ans = true;
            return;
        }
        vis[i][j] = 1;
        solver(board , word , i+1 , j , ind+1 , vis,n,m,len);
        solver(board , word , i-1 , j , ind+1 , vis,n,m,len);
        solver(board , word , i , j+1 , ind +1 , vis,n,m,len);
        solver(board , word , i , j-1 ,ind +1 , vis,n,m,len);
        vis[i][j] =0;
    }
    bool isWordExist(vector<vector<char>>& board, string& word) {
        // Code here
        int len = word.size(), n = board.size() , m = board[0].size();
        vector<vector<int>> vis(n , vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    solver(board , word , i , j ,0 , vis , n , m ,len);
                    if(ans){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends