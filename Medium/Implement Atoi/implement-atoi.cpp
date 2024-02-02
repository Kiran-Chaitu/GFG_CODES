//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int f=0;
	    if(s[0]=='-') f=1;
	    int num=0,i=0;
	    if(f){
	       i=1; 
	    }
	    for(int j=i;j<s.size();j++){
	        if( s[j]>='0' and s[j]<='9'){
	            num=num*10+(s[j] - '0');
	        }
	        else return -1;
	        
	    }
	    if(f) return -(num);
	    return num;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends