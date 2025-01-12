//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends



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
    int maxWater(vector<int> &arr) {
        // code here
        vector<ll> l , r;
        ll maxi=0,sum=0 , n =arr.size();
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
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends