//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

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
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        sort(all(arr));
        ll n=sz(arr) , l = 0 , r = n-1 , prevl=-1 , prevr =-1 , ans=lx;
        while(l<r){
            //cout<<arr[l]<<" "<<arr[r]<<" ";
            if(abs(arr[l] + arr[r] - target) <= ans ){
                ans = abs(arr[l] + arr[r] - target);
                //cout<<ans<<endl;
                if(prevl!=-1 and prevr!=-1){
                    if( abs(arr[l]+arr[r] -target) == abs(arr[prevl] + arr[prevr] - target)){
                        if(abs(arr[l] - arr[r]) > abs(arr[prevl] - arr[prevr])){
                            prevl = l ;
                             prevr = r;
                        }
                    }else{
                        prevl = l , prevr = r;
                    }
                }else prevl=l , prevr=r;
            }
            if(arr[l] + arr[r] <= target)   l++;
            else r--;
        }
        if(ans==lx) return {};
        return {arr[prevl] , arr[prevr]};
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends