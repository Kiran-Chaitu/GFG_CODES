//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int,int> m,ind;
        for(int i=0;i<n;i++){
            
            m[arr[i]]++;
            if(m[arr[i]]==1){
                ind[arr[i]]=i+1;
            }
        }
        int ans = INT_MAX;
        for(auto i : m){
            if(i.second>1){
                if(ind[i.first]<ans) ans= ind[i.first];
            }
        }
        if(ans!= INT_MAX) return ans;
        return -1;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends