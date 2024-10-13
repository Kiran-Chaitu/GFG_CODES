//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void sortLastMelements(vector<int>&nums, int n, int m) {
    	// Code here
    	priority_queue<int> pq;
    	for(int i=n+m-1;i>=n;i--){
    	    pq.push(nums[i]);
    	}
    	int k=n+m-1;
    	while(!pq.empty()){
    	    nums[k--]=pq.top();
    	    pq.pop();
    	}
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n+m);
		for(auto &i: nums)
			cin >> i;
		Solution obj;
		obj.sortLastMelements(nums, n, m);
		for(auto i: nums)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends