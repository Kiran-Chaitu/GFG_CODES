//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // You need to complete this function
    long long c=0;
    void solver(int n,int x,int y,int z){
        c++;
        if(n==0) return;
        if(n==1){
            cout<<"move disk 1 from rod "<<x<<" to rod "<<z<<endl;
            return;
        }
        solver(n-1,x,z,y);
        cout<<"move disk "<<n<<" from rod "<<x<<" to rod "<<z<<endl;
        solver(n-1,y,x,z);
    }
    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from, int to, int aux) {
        // Your code here
        solver(n,1,2,3);
        return c;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T; // testcases
    while (T--) {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}

// } Driver Code Ends