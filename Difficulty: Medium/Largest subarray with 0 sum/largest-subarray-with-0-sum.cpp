//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& A, int N) {
        // Your code here
        int maxi=0,sum=A[0],k=0;
        map<int,int> mp;
        vector<int> v(N);
        v[0]=A[0];
        for(int i=1;i<N;i++){
            sum+=A[i];
            v[i]=sum;
        }
        for(int i=0;i<N;i++){
            //cout<<v[i]<<" ";
            if(v[i]==k){
                maxi=max(maxi,i+1);
                if(mp.find(v[i]) == mp.end())   mp[v[i]]=i;
            }
            else{
                if(mp.find(v[i] - k) != mp.end()){
                    maxi = max(maxi , i - mp[v[i] - k]);
                    //cout<<maxi<<endl;
                    if(mp.find(v[i]) == mp.end())   mp[v[i]]=i;
                }
                else{
                    if(mp.find(v[i]) == mp.end())    mp[v[i]]=i;
                }
            }
            
            
        }
        return (maxi > 0) ? maxi : 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends