//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Your code goes hereclass Solution{
	
class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   // Your code goes here
	   sort(a,a+n);
	   sort(b,b+m);
	   vector<int> v;
	   int i=0,j=0;
	   while ( i < n and j < m){
	       if(a[i] <= b[j])  v.push_back(a[i++]);
	       else v.push_back(b[j++]);
	   }
	   while( i < n) v.push_back(a[i++]);
	   while ( j < m) v.push_back(b[j++]);
	   for(int i=0;i<(m+n);i++) res[i] = v[i];
	}
};
	  


//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }

	    for(int i = 0;i<m;i++){
	        cin >> b[i];
	    }
	    
	    int res[n+m];

      
        Solution ob;
        ob.sortedMerge(a,b,res,n,m);

        for(int i = 0;i<n+m;i++){
	        cout << res[i] << " ";
	    }
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends