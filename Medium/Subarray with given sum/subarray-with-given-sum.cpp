//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        long long int sum=0,i,j=0;
        vector <int> v;
        long long int min=arr[0],soa=arr[0];
        for(i=1;i<n;i++){
            if(min>arr[i]) min=arr[i];
            soa+=arr[i];
        }
        if(s<min || s>soa) return {-1};
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            if(arr[i]==s)
            {
                v.push_back(i+1);
                v.push_back(i+1);
                return v;
            }
            else if(sum==s)
            {
                v.push_back(j+1);
                v.push_back(i+1);
                return v;
            }
            else if(sum>s)
            {
                while(sum>s)
                {
                    sum-=arr[j];
                    if(sum==s){
                        v.push_back(j+2);
                        v.push_back(i+1);
                        return v;
                    }
                    j++;
                }
            }
        }
        return {-1};
    }
};


//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends