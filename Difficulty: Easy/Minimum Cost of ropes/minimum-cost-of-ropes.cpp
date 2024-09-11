//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        long long ans=0;
        if(arr.size()==1) return 0;
        priority_queue<long long ,vector<long long > , greater<long long >> pq;
        for(auto i:arr) pq.push(i);
        while(pq.size()>1){
            long long sum =0;
            sum+=pq.top();
            pq.pop();
            sum+=pq.top();
            pq.pop();
            ans+=sum;
            pq.push(sum);
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends