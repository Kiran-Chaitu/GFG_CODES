//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
   
    int padovanSequence(int n)
    {
       //code here
       if(n==1 || n==2 || n==0) return 1;
       int a=1,b=1,c=1,d;
       if(n>=3) n-=2;
       while(n--){
           d = (a%1000000007 +b%1000000007)%1000000007;
           a=b;
           b=c;
           c=d;
       }
       return d;
       
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends