//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string s)
    {
        // code here
        int n=s.size();
        long long int capital_count=0,lower_count=0,total=0;
        for(int i=0;i<n;i++){
            capital_count=0,lower_count=0;
            for(int j=i;j<n;j++){
                if(islower(s[j])) lower_count++;
                else if(isupper(s[j])) capital_count++;
                if(capital_count == lower_count) total++;
            }
            
        }
        return total;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends