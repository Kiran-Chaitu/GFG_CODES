//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity.
    int dp[(int)(1e3+1)][(int)(1e3+1)];
    int solver(vector<int> &val , vector<int> &wt , int cap , int ind , int n){
        if(ind >= n) return 0;
        if(dp[ind][cap]!=-1) return dp[ind][cap];
        int left =0 , right =0;
        if(cap >= wt[ind]){
            left += (val[ind] + solver(val , wt  , cap - wt[ind] , ind+1 , n)); 
        }
        right =  solver(val , wt , cap , ind+1 , n);
        return  dp[ind][cap] = max(left , right);
    }
    
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        // code here
        memset(dp , -1 , sizeof(dp));
        return solver(val , wt, capacity , 0 , val.size());
    }
};

//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapSack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends