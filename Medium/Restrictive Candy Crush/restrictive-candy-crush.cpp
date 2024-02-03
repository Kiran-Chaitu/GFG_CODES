//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string ans(string s,int k){
        string ns;
        int n=s.size(),i=0,j=i+1,f=0;
        while(i<n){ 
            if(s[i]==s[j]){
                f=0;
                while(j<n and s[i]==s[j]){
                    if((j-i+1)==k){
                        f=1;
                        break;
                    }
                    j++;
                }
                if(f){
                    i=j+1;
                    j=i+1;
                }
                else{
                    ns+=s[i];
                    i++;
                    j=i+1;
                }
            }
            else{
                ns+=s[i];
                i++;
                j++;
            }
        }
        return ns;
    }
    string solver(string sol,int k){
        int c=1,f=1;
        while(1){
            c=1;
            for(int i=0;i<sol.size()-1;i++){
                if(sol[i]==sol[i+1])    c++;
                else c=1;
                if(c>=k) break;
            }
            if(c<k){
                break;
            }
            else{
                sol=ans(sol,k);
            }
        }
        return sol;
    }
    string Reduced_String(int k,string s){
        // Your code goes here
        if(k==1) return "";
        return solver(s,k);
    }
    

};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends