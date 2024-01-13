//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int a[], int n, int t) {
        // code here
        int c=0;
        unordered_map<int , int > m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        for(int i=0;i<n;i++){
            int dif =  t - a[i];
            if(a[i] == dif){
                int f=m[dif];
                c+=(f*(f-1))/2;
                m[a[i]]=0;
            }
            else if( m[dif]>0){
                c+=(m[a[i]] * m[dif]);
                m[a[i]]=0;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends