//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int ans =0 , temp =0;
        int l=0,r=0 , n = s.size();
        vector<int> v(26);
        while(r<n){
            while(v[s[r] - 'a'] > 0)  v[s[l] - 'a']-- , l++;
            v[s[r] - 'a']++;
            ans = max(ans , r-l+1);
            r++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends