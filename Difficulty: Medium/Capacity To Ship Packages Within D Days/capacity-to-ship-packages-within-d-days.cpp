//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool ans(int w[] ,int n,int days, int c){
        int d = 1,sum = 0;
        for(int i = 0;i <n;i++){
            if( sum + w[i] <= c ){
                sum += w[i];
            }
            else{
                d++;
                sum = w[i];
            }
        }
        return d <= days;
    }
    int leastWeightCapacity(int weights[], int n, int days) {
        // code here
        int minw = INT_MIN,sum = 0;
        for(int i = 0;i < n; i++){
            if(minw < weights[i]) minw = weights[i];
            sum += weights[i];
        }
        if(days == 1) return sum;
        int l = minw,r = sum;
        while(l <= r){
            int mid = (l+r) >> 1;
            if(ans(weights,n,days,mid))   r = mid-1;
            else l = mid+1;
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, D;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr, N, D) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends