//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int editDistance(string word1, string word2) {
        // Code here
        int n = word1.size() , m = word2.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1));
        for(int i=0;i<=n;i++){
            dp[i][0] = i;
            //cout<<dp[i][0]<<" ";
        }
        //cout<<endl;
        for(int i=0;i<=m;i++){
            dp[0][i]=i;
            //cout<<dp[0][i]<<" ";
        }
        //cout<<endl;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                //cout<<dp[i][j]<<" ";
                if(word1[i-1]== word2[j-1]) dp[i][j] = dp[i-1][j-1];
                else{
                    dp[i][j] =1 + min( dp[i-1][j-1] , min(dp[i-1][j] , dp[i][j-1]) );
                }
                
            }
            //cout<<endl;
        }
        return dp[n][m];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends