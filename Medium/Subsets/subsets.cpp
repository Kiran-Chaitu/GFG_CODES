//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


vector<vector<int>> sol;
class Solution
{
    public:
    void sset(vector<int> v , int ind, vector<int> ans, int size,vector<vector<int>>&dp){
        if(ind==size){
            dp.push_back(ans);
            return;
        }
        ans.push_back(v[ind]);
        sset(v,ind+1,ans,size,dp);
        ans.pop_back();
        sset(v,ind+1,ans,size,dp);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>> dp;
        sset(A,0,{},A.size(),dp);
        sort(dp.begin(),dp.end());
        return dp;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends