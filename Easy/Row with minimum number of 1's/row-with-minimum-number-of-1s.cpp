//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int oc=INT_MAX,rans=INT_MAX;
        for(int i=0;i<n;i++){
            int t=0;
            for(int j=0;j<m;j++){
                if(a[i][j] == 1) t++;
            }
            if(oc>t){
                oc=t;
                rans=i+1;
            }
        }
        if(rans==INT_MAX) return 1;
        return rans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends