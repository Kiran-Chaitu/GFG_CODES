//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node* head);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    struct Node* reverse(struct Node* head,struct Node *prev){
        while(head){
            struct Node *nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }
    struct Node* modifyTheList(struct Node* head) {
        // add code here.
        struct Node *temp=head,*nh,*s=head,*f=head;
        int l=0,n,k;
        while(temp){
            temp=temp->next;
            l++;
        }
        while(f and f->next){
            s=s->next;
            f=f->next->next;
        }
        nh = s;
        n=l;
        if(l&1){
            temp = nh->next;
        }
        else{
            temp = nh;
        }
        struct Node *rh = reverse(temp,(l&1)? nh : NULL),*th=rh;
        temp = head;
        l=1;
        while(l){
            if(rh==nh and (n&1)) k=rh->data;
            int ans = rh->data - temp->data;
            rh->data = temp->data;
            temp->data = ans;
            if(rh==NULL || rh==nh) l=0;
            rh = rh->next;
            temp = temp->next;
        }
        temp=NULL;
        l=1;
        while(l){
            //cout<<th->data<<" ";
            struct Node* nxt = th->next;
            if(th==NULL || th==nh)  l=0;
            th->next=temp;
            temp=th;
            th = nxt;
        }
        if(n&1) temp->data = k;
        //cout<<endl;
        return head;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }
        Solution obj;
        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        head = obj.modifyTheList(head);
        print(head);
    }
    return 0;
}
// } Driver Code Ends