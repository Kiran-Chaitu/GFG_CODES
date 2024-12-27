//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++



#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second

const int MOD = 1e9 + 7;
const int INF = INT_MAX;


class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        vector<int> ans;
        int i,j;
        int l=lower_bound(all(arr),x) - arr.begin();
        int r = upper_bound(all(arr),x) - arr.begin();
        i=l-1;
        j = r;
        while(k){
            //cout<<arr[i]<<" "<<arr[j]<<" "<<endl;
            if(i>=0 and j<n){
                if((arr[j] - x) <= (x - arr[i]) ){
                    ans.push_back(arr[j++]);
                }
                else ans.push_back(arr[i--]);
            }
            else if(j<n){
                ans.push_back(arr[j++]);
            }
            else if(i>=0){
                ans.push_back(arr[i--]);
            }
            k--;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends