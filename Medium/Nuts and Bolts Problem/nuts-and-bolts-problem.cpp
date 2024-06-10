//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        unordered_map<char,int> mp1,mp2;
        for(int i=0;i<n;i++){
            mp1[nuts[i]]++;
            mp2[bolts[i]]++;
        }
        vector<char> v={'!','#','$','%','&','*','?','@','^'};
        int i=0,j=0;
        while(i<9 and j<n){
            if(mp1[v[i]]>0) nuts[j++]=v[i];
            mp1[v[i++]]--;
        }
        i=0,j=0;
        while(i<9 and j<n){
            if(mp2[v[i]]>0) bolts[j++]=v[i];
            mp2[v[i++]]--;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends