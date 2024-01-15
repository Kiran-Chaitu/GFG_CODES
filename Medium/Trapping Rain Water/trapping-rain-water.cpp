//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

typedef long long ll;
class Solution{
    
    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<ll> l , r;
        ll maxi=0,sum=0;
        for(int i = 0; i < n;i++ ){
            if( arr[i] > maxi ) maxi = arr[i];
            l.push_back(maxi);
        }
        maxi=0;
        for( int i = n-1; i >= 0; i--){
            if( arr[i] > maxi ) maxi = arr[i];
            r.push_back(maxi);
        }
        for( int i = 0 ; i < n; i++){
            sum += min(l[i] , r[n-1-i]) - arr[i];
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends