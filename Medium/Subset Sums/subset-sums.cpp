//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solver(vector<int> &arr,int n,int ind,vector<int> &v,vector<int> &ans){
        if(ind>=n){
            int sum=0;
            for(int i=0;i<v.size();i++) sum+=v[i];
            ans.push_back(sum);
            return;
        }
        v.push_back(arr[ind]);
        solver(arr,n,ind+1,v,ans);
        v.pop_back();
        solver(arr,n,ind+1,v,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> v,ans;
        solver(arr,N,0,v,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends