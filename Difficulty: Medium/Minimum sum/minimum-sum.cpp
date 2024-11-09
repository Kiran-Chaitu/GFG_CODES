//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) {
        // code here
         sort(arr.begin(), arr.end());     
        string a="", b="";
        int n=arr.size();
        for(int i=0; i<n; i++)
        {
            if(i%2)
            {
                b+=char(arr[i]+'0');
            }
            else
            {
                a+=char(arr[i]+'0');
            }
        }
        string ans="";
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int prev=0;
        for(int i=0; i<min(a.size(), b.size()); i++)
        {
            int cur=prev+(a[i]-'0')+(b[i]-'0');
            prev=cur/10;
            ans+=char((cur%10)+'0');
        }
        if(b.size()<a.size())
        {
            prev+=a[a.size()-1]-'0';
        }
        ans+=to_string(prev);
        while(ans.back()=='0') ans.pop_back();
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends