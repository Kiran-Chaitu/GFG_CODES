//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> after){
        // Code here
        int rsum=0,csum=0;
        vector<vector<int>> v(N,vector<int>(M,0));
        for(int i=0;i<N;i++){
            rsum=0;
            for(int j=0;j<M;j++){
                v[i][j] = after[i][j] - rsum;
                rsum+=v[i][j];
            }
        }
        for(int i=0;i<M;i++){
            csum=0;
            for(int j=0;j<N;j++){
                v[j][i]-=csum;
                csum+=v[j][i];
            }
        }
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M; 
        vector<vector<int>> after(N,vector<int>(M));
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>after[i][j];
            }
        } 
        Solution obj;
        vector<vector<int>> before=obj.computeBeforeMatrix(N,M,after); 
        for(int i=0;i<before.size();i++){
            for(int j=0;j<before[i].size();j++){
                cout<<before[i][j]<<' ';
            } 
            cout<<endl;
        }
    }
}
// } Driver Code Ends