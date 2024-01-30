//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:

        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            // your code here
            n1++;
            n2++;
            n3++;
            int sol[21][21][21]={0};
            for(int i=1;i<n1;i++){
                for(int j=1;j<n2;j++){
                    for(int k=1;k<n3;k++){
                        if(A[i-1]==B[j-1] and B[j-1]==C[k-1]){
                            sol[i][j][k]=1+(sol[i-1][j-1][k-1]);
                        }
                        else{
                            int maxi;
                            if(sol[i-1][j][k]>sol[i][j-1][k] and sol[i-1][j][k] > sol[i][j][k-1]) maxi=sol[i-1][j][k];
                            else if(sol[i][j-1][k] > sol[i][j][k-1]) maxi=sol[i][j-1][k];
                            else maxi=sol[i][j][k-1];
                            sol[i][j][k]=maxi;
                        }
                    }
                }
            }
            return sol[n1-1][n2-1][n3-1];
            
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends