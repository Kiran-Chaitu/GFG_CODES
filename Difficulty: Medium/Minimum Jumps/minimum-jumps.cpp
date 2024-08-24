//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int c=0,maxi=0,temp;
        if(n==1) return 0;
        if(arr[0]==0) return -1;
        if(arr[0]>=n-1) return 1;
        int i=0;
        while(i<n){
            maxi=0;
            if(arr[i]==0) return -1;
            if(i>=n-1) return c;
            int k=arr[i];
            for(int j=i+1;j<=k+i and j<n;j++){
                if(maxi < (arr[j] + j)){
                    maxi = arr[j] + j;
                    temp=j;
                }
            }
            c++;
            i=temp;
            if(arr[i] + i >= n-1) {
                return c+1;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends