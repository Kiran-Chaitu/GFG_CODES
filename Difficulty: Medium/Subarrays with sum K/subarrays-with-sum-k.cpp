//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int,int> mp;
        int sum=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            v.push_back(sum);
        }
        mp[0]=1;
        sum=0;
        for(int i=0;i<n;i++){
            if(mp.find(v[i] - k)!=mp.end()){
                sum+=mp[v[i] - k];  
            }
            mp[v[i]]++;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends