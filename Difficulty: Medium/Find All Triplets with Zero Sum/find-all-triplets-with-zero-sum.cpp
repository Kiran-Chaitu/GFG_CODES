//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &nums) {
        // Code here
        int n=nums.size();
        unordered_map<int,vector<int>> mp;
        vector<vector<int>> v;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(mp[-(nums[i] + nums[j])].size() > 0){
                    vector<int> temp;
                    for(auto k:mp[-(nums[i] + nums[j])]){
                        temp = {i,j};
                        temp.push_back(k);
                        sort(temp.begin(),temp.end());
                        v.push_back(temp);
                    }
                }
            }   
            mp[nums[i]].push_back(i);
        }
        return v;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;

        vector<vector<int>> res = ob.findTriplets(arr);
        sort(res.begin(), res.end());
        if (res.size() == 0) {
            cout << "[]\n";
        }
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends