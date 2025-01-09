//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int s) {
        // code here
        long long int sum=0,i,j=0 ,n =arr.size();
        vector <int> v;
        long long int min=arr[0],soa=arr[0];
        for(i=1;i<n;i++){
            if(min>arr[i]) min=arr[i];
            soa+=arr[i];
        }
        if(s<min || s>soa) return {-1};
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            if(arr[i]==s){
                return {i+1,i+1};
            }
            else if(sum==s){
                return {j+1,i+1};
            }
            else if(sum>s){
                while(sum>s){
                    sum-=arr[j];
                    if(sum==s){
                        return {j+2,i+1};
                    }
                    j++;
                }
            }
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends