//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        int maxi=0,sum=A[0];
        map<int,int> mp;
        vector<int> v(N);
        v[0]=A[0];
        for(int i=1;i<N;i++){
            sum+=A[i];
            v[i]=sum;
        }
        for(int i=0;i<N;i++){
            //cout<<v[i]<<" ";
            if(v[i]==k){
                maxi=max(maxi,i+1);
                if(mp.find(v[i]) == mp.end())   mp[v[i]]=i;
            }
            else{
                if(mp.find(v[i] - k) != mp.end()){
                    maxi = max(maxi , i - mp[v[i] - k]);
                    //cout<<maxi<<endl;
                    if(mp.find(v[i]) == mp.end())   mp[v[i]]=i;
                }
                else{
                    if(mp.find(v[i]) == mp.end())    mp[v[i]]=i;
                }
            }
            
            
        }
        return (maxi > 0) ? maxi : 0;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends