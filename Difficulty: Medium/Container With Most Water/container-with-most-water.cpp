//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &height) {
        // code here
        int maxa = INT_MIN;
        int i = 0,j = height.size() - 1;
        while(i < j){
            int l = min( height[i], height[j]);
            int b = j - i;
            int area = l * b;
            maxa = max( maxa, area);
            if( height[i] < height[j]) i++;
            else j--;
        }
        if(maxa == INT_MIN) return 0;
        return maxa;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends