//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int subArraySum(vector<int>& arr, int tar) {
        // code here.
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0,n=arr.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            sum+=arr[i];
            v[i]=sum;
        }
        sum=0;
        for(int i=0;i<n;i++){
            if(mp.find(v[i] - tar)!=mp.end()) sum+=mp[v[i] - tar];
            mp[v[i]]++;
        }
        return sum;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        cout << ob.subArraySum(arr, k);
        cout << '\n';
    }
    return 0;
}
// } Driver Code Ends