//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        //Your Code Here
        //unordered_map<int,int> m;
        
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int x = i+1, y = n-1;
            while(x<y){
                if( (a[x] + a[y]) == (X - a[i])  ) return 1;
                else if( (a[x] + a[y]) > (X - a[i])) y--;
                else x++;
            }
        }
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends