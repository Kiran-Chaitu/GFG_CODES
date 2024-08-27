//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int maxi = INT_MIN,n = arr.size();
        vector<int> ls(n),rs(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() and st.top()>= arr[i]) st.pop();
            if(!st.empty()) ls[i] = st.top();
            st.push(arr[i]);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top() >= arr[i])   st.pop();
            if(!st.empty()) rs[i] = st.top();
            st.push(arr[i]);
        }
        for(int i=0;i<n;i++){
            maxi = max(maxi,abs(rs[i]-ls[i]));
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends