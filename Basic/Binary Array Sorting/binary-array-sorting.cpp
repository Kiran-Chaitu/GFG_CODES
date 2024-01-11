//{ Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int n)
    {
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
        int i=0,j=0,zc=0,oc=0;
        for(int i=0;i<n;i++){
            if(A[i]==0) zc++;
        }
        for(int i=0;i<n;i++){
            if(i<zc){
                A[i]=0;
            }
            else A[i]=1;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends