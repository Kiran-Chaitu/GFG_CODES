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
    bool solver(int mid,vi &piles,int h){
        ll sum=0,rem=0;
        for(ll i=0;i<piles.size();i++){
            sum+=(piles[i]/mid);
            if(piles[i]<mid){
                sum++;
            }
            else{
                rem=(piles[i]%mid);
                if(rem) sum++;
            }
        }
        
        //cout<<" sum = "<<sum<<" rem = "<<rem<<"\n";
        return sum<=h;
    }
    int kokoEat(vector<int>& piles, int h) {
        // Code here
        ll l=1,maxi=INT_MIN;
        for(int i:piles){
            if(i>maxi) maxi = i;
        }
        ll r=maxi;
        if(piles.size()==h) return maxi;
        while(l<=r){
            ll mid = (l+r)>>1;
            //cout<<"mid = "<<mid<<" low = "<<l<<" high = "<<r<<endl;
            if(solver(mid,piles,h)) r = mid -1;
            else l = mid+1;
        }
        return l;
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
        int k = stoi(ks);
        Solution ob;

        cout << ob.kokoEat(arr, k);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends