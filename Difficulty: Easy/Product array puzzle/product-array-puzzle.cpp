//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        vector<long long int> suffix , prefix,ans;
        long long int n=nums.size(),temp=1;
        if(n==1) return {1};
        for(long long int i=0;i<n;i++){
            temp*=nums[i];
            prefix.push_back(temp);
        }
        temp=1;
        for(long long int i=n-1;i>=0;i--){
            temp*=nums[i];
            suffix.push_back(temp);
        }
        reverse(suffix.begin(),suffix.end());
        for(long long int i=0;i<n;i++){
            if(i==0){
                ans.push_back(suffix[i+1]);
            }
            else if(i==n-1){
                ans.push_back(prefix[n-2]);
            }
            else {
                temp = suffix[i+1] * prefix[i-1];
                ans.push_back(temp);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends