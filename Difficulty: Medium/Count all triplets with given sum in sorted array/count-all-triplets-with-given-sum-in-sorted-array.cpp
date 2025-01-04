//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int c=0,n=arr.size();
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum =arr[i] + arr[j] + arr[k];
                if(sum==target){
                    c++;
                    int temp = j+1;
                    while(temp < k and arr[temp-1]==arr[temp]){
                        c++;
                        temp++;
                    }
                    k--;
                }
                else if(sum > target) k--;
                else j++;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends