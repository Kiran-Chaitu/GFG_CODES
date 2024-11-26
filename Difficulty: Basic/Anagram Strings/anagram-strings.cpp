//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        // code here
        unordered_map<char,int> mp;
        for(char i:S1) mp[i]++;
        for(char i:S2){
            mp[i]--;
            if(mp[i]<0) return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends