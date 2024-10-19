//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

#include<bits/stdc++.h>
class Solution {
  public:
    string roundToNearest(string s) {
        // Complete the function
        int n=s.size(),ans=0;
        if(n==1){
            if(s[n-1] - '0' <= 5) return "0";
            else return "10";
        }
        if(s[n-1] - '0' <= 5){
            s.pop_back();
            s+='0';
        }
        else {
            int j=n-2,k=1;
            //bool t=true;
            s[j+1] ='0';
            while(j>-1 and k){
                int t = s[j] - '0';
                if(t!=9){ 
                    k = 0 ;
                    s[j] = s[j]+1;
                }
                else{
                    s[j--] ='0';
                }
            }
            if(k) s = '1' + s;
        }
        return s;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends