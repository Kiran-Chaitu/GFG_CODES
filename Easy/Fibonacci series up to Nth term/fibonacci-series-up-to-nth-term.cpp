//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        vector<int> v;
        n=n+1;
        int a=0,b=1,c=a+b;
        while(n--){
            c=(a+b)%1000000007;
            v.push_back(a%1000000007);
            a=b%1000000007;
            b=c%1000000007;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends