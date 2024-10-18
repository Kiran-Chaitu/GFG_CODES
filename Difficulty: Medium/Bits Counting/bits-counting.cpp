//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int count(int n){
        int c=0;
        while(n){
            if(n&1) c++;
            n>>=1;
        }
        return c;
    }
    vector<int> countBits(int n) {
        // code here
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(count(i));
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> ans = sol.countBits(n);
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends