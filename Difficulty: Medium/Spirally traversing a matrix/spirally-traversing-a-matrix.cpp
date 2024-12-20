//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        long long int row = matrix.size(),col = matrix[0].size() , ans = row*col;
        vector<int> v;
        int i=0,j=0;
        bool right = true,left = false, up = false,down=false;
        while(ans){
            //cout<<ans<<" ";
            if(right){
                while(j<col and matrix[i][j]!=-1000 and ans>0){
                    ans--;
                    v.push_back(matrix[i][j]);
                    matrix[i][j]=-1000;
                    j++;
                }
                i++;
                j--;
                down=true;
                right=false;
                
                
            }
            else if(down){
                while(i<row and matrix[i][j]!=-1000 and ans>0){
                    ans--;
                    v.push_back(matrix[i][j]);
                    matrix[i][j]=-1000;
                    i++;
                }
                j--;
                i--;
                down = false;
                left =true;
                
            }
            else if(left){
                while(j>=0 and matrix[i][j]!=-1000 and ans>0){
                    ans--;
                    v.push_back(matrix[i][j]);
                    matrix[i][j]=-1000;
                   j--;
                }
                j++;
                i--;
                up = true;
                left =false;
                
            }
            else if(up){
                while(i>0 and matrix[i][j]!=-1000 and ans>0){
                    ans--;
                    v.push_back(matrix[i][j]);
                    matrix[i][j]=-1000;
                    i--;
                }
                j++;
                i++;
                up = false;
                right =true;
                
            }
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends