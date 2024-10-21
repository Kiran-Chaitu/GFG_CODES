//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int MOD = 1e9 + 7;
    int countgroup(vector<int>& arr) {
        // Complete the function
        int ans=0,n=arr.size();
        for(int i=0;i<n;i++)
        {
            ans=ans^arr[i];
        }
        if(ans!=0){
            return 0;
        }
        return (int)pow(2,n-1)-1;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int ans = obj.countgroup(arr);
        cout << ans << endl;
    }
}

// } Driver Code Ends