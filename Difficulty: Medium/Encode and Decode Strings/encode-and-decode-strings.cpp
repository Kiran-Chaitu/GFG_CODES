//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string sp="~";
    string encode(vector<string>& s) {
        // code here
        string ans="";
        for(string i:s){ 
            ans+=i;
            ans+=sp;
        }
        return ans;
    }

    vector<string> decode(string& s) {
        // code here
        vector<string> ans;
        string t="";
        for(char i:s){
            if(i=='~'){
                ans.push_back(t);
                t="";
            }
            else t+=i;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // To ignore the newline after the number of test cases

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        string word;
        vector<string> s;

        while (ss >> word) {
            s.push_back(word);
        }

        Solution obj;
        string encodedString = obj.encode(s);
        vector<string> decodedStrings = obj.decode(encodedString);

        for (string x : decodedStrings) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends