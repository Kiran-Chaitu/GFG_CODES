//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    vector<string> v;
	    string ns;
	    void pset(int l,int ind,string ans){
	        if(ind>=l){
	            if(!ans.empty()) v.push_back(ans);
	            return;
	        }
	        ans+=(ns[ind]);
	        pset(l,ind+1,ans);
	        if(!ans.empty()) ans.pop_back();
	        pset(l,ind+1,ans);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    string ans="";
		    ns=s;
		    pset(s.size(),0,ans);
		    sort(v.begin(),v.end());
		    return v;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends