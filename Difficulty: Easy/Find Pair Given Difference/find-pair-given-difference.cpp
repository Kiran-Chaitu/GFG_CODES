//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

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
const ll lx = LLONG_MAX;
const ll ln = LLONG_MIN;

class Solution {
  public:
    bool solver(vi &v,int x,int l,int r){
        while(l<=r){
            int mid=(l+r)>>1;
            if(v[mid]==x) return true;
            else if(v[mid] < x) l= mid+1;
            else r = mid -1 ;
        }
        return false;
    }
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(all(arr));
        ll n = arr.size();
        if(n<=1) return false;
        for(int i=0;i<n;i++){
            if(solver(arr,x+arr[i],i+1,n-1)) return true;
        }
        return false;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    scanf("%d ", &t);

    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        scanf("%d ", &k);
        Solution obj;

        cout << (obj.findPair(arr, k) ? "true" : "false") << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends