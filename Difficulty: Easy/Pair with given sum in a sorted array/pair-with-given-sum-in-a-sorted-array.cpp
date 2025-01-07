//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int n= arr.size();
        if( (arr[0] + arr[1]  > target ) || (arr[n-1] + arr[n-1] < target)) return 0;
        int l=0,r=n-1,prevl=0,ans=0;
        while(l<r) {
            int sum = arr[l] + arr[r];
            //cout<<"l = "<<arr[l]<<" r ="<<arr[r]<<" sum = "<<sum<<" ans = "<<ans<<endl;
            
            if((arr[l] == arr[r]) and (sum==target)){
                int k= (r - l);
                ans+=(k * (k+1))/2;
                break;
            }
            if(arr[l] == arr[l+1]){
                prevl =l;
            }
            while(arr[l] == arr[l+1] and l+1<r){
                l++;
            }
            if(arr[prevl] == arr[l] and arr[prevl] + arr[l] == target){
                int k= ( l - prevl);
                ans+=(k * (k+1))/2;
                break;
            }
            if((arr[prevl] == arr[l]) and (sum==target)) ans+=(l - prevl +1);
            else if(sum == target) ans++;
            if(sum < target) l++;
            else r--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends