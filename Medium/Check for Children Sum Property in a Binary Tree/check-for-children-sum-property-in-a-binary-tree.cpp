//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    vector<int> levelOrder(Node* root) {
        if(!root) return {};
        //if(root->left==NULL and root->right==NULL) return {{root->data}};
        vector<int> ans;
        queue<Node *>q;
        q.push(root);
        while(!q.empty()){
            Node *nn=q.front();
            if(nn!=NULL){
                if(nn->left!=NULL or nn->right!=NULL){
                    if(nn->left!=NULL)q.push(nn->left);
                    else q.push(NULL);
                    if(nn->right!=NULL)q.push(nn->right);
                    else q.push(NULL);
                }
            }
            if(nn!=NULL)    ans.push_back(nn->data);
            else ans.push_back(0);
            q.pop();
        }
        return ans;
    }
    int isSumProperty(Node *root)
    {
     // Add your code here
        int l,j=0;
        vector<int> ans=levelOrder(root);
        l=ans.size();
        //for(auto i:ans) cout<<i<<" ";
        //cout<<endl;
        for(int i=0;j<=(l/2)-1;i++){
            if(ans[i]==0) continue;
            int ln=ans[2*j+1];
            int rn=ans[2*j+2];
            if(ans[i] != ln+rn) return 0;
            else j++;
        }
        return 1;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.isSumProperty(root) << endl;
    }
    return 0;
}

// } Driver Code Ends