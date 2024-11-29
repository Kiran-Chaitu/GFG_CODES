//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        string s="";
        int carry=0;
        int i=s1.size()-1,j=s2.size()-1;
        while(i>=0 and j>=0){
            
            int sum = (s1[i--] - '0') + (s2[j--] - '0') + carry;
            //cout<<sum<<" ";
            if(sum==2){
                s='0' + s;
                carry=1;
            }
            else if(sum==1){
                s='1' + s;
                carry=0;
            }
            else if(sum==0){
                s ='0' + s;
                carry=0;
            }
            else{
                s='1'+s;
                carry=1;
            }
        }
        while(i>=0){
            int sum = (s1[i--] - '0') + carry;
            //cout<<sum<<" ";
            if(sum==2){
                s='0' + s;
                carry=1;
            }
            else if(sum==1){
                s='1' + s;
                carry=0;
            }
            else if(sum==0){
                s ='0' + s;
                carry=0;
            }
            else{
                s='1'+s;
                carry=1;
            }
        }
       // cout<<endl;
        while(j>=0){
            
            int sum = (s2[j--] - '0') + carry;
            //cout<<sum<<" ";
            if(sum==2){
                s='0' + s;
                carry=1;
            }
            else if(sum==1){
                s='1' + s;
                carry=0;
            }
            else if(sum==0){
                s ='0' + s;
                carry=0;
            }
            else{
                s='1'+s;
                carry=1;
            }
        }
        if(carry) s = '1' + s;
        string ans="";
        i=0;
        while(s[i]=='0' and i<s.size()) i++;
        for(;i<s.size();i++) ans+=s[i];
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends