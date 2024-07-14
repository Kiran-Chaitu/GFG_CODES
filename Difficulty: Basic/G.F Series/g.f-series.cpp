//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gfSeries(int N)
    {
        // Write Your Code here
        long long int a =0 , b=1,c;
        while(N--){
            cout<<a<<" ";
            c = (a*a) - b;
            a=b;
            b=c;
        }
        cout<<endl;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends