//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++


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
const ll lx = LLONG_MAX;
const ll ln = LLONG_MIN;

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(all(arr));
        int n=sz(arr) ,l = 0 , r = n-1 , ans = 0;
        while(l < r){
            int sum = arr[l] + arr[r];
            if( sum < target) ans+=(r-l) ,l++;
            else if(sum >= target) r--;
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends