//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int solver(long long int l,long long int r,long long int n){
        long long int mid = (l+r)>>1, ans = mid*mid;
        long long int a = (mid-1)*(mid-1);
        if(ans==n) return mid;
        else if(a< n and ans > n) return mid-1;
        else if(ans > n) return solver(l,mid-1,n);
        return solver(mid+1,r,n);
    }
    long long int floorSqrt(long long int n) {
        if(n==1) return 1;
        return solver(1,n,n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends