//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    set<string> st;
    void solver(string s  , int start , int end){
        if(start >= end){
            st.insert(s);
            return;
        }
        for(int i=start;i<=end;i++){
            swap(s[start] , s[i]);
            solver(s, start + 1 , end);
            swap(s[start] , s[i]);
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string> ans;
        solver(s , 0 , s.size() -1);
        for(auto i:st) ans.push_back(i);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends