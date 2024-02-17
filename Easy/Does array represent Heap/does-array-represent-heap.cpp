//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        int flag=1;
        for(int i=0;i<n and flag==1;i++){
            int l=2*i+1,r=2*i+2;
            if((2*i+1)<n) if(arr[l]>arr[i]) flag=0;
            if((2*i+2)<n) if(arr[r]>arr[i]) flag=0;
        }
        return flag;
        
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends