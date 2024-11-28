//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        bool isMinus = false;
        long long int ans=0,mini = -(1<<31),maxi=(1<<31)-1,i=0;
        while(s[i]==' ') i++;
        if(s[i]=='+' || s[i]=='-'){
            isMinus = s[i]=='-';
            i++;
        }
        for(;i<strlen(s);i++){
            if(s[i]>='0' and s[i]<='9'){
                if(ans > (maxi - (s[i]-'0'))/10)    return (isMinus) ? mini : maxi;
                ans = ans*10 + (s[i]-'0');
            }
            else break;
        }
        return (isMinus) ?  -(ans) : ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends