//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> sortArray(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            arr[i] = i+1;
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution sol;
        vector<int> res = sol.sortArray(arr);

        for (int i : res) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends