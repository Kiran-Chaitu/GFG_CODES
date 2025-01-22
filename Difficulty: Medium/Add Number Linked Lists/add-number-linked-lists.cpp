//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  
  Node* reverse(Node *num){
        Node *curr=num,*prev=NULL,*nxt;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }

    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        Node *num11=reverse(num1);
        Node *num22=reverse(num2);
        int carry=0;
        Node *head=NULL,*tail;
        while(num11!=NULL && num22!=NULL){
            int sm=num11->data+num22->data+carry;
            int val=sm%10;
            carry=sm/10;
            Node *temp=new Node(val);
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            num11=num11->next;
            num22=num22->next;
        }
        while(num11!=NULL){
            int sm=num11->data+carry;
            carry=sm/10;
            int val=sm%10;
            Node *temp=new Node(val);
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            num11=num11->next;
        }
        while(num22!=NULL){
            int sm=num22->data+carry;
            carry=sm/10;
            int val=sm%10;
            Node *temp=new Node(val);
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            num22=num22->next;
        }
        if(carry){
            Node *temp=new Node(carry);
            tail->next=temp;
        }
        head=reverse(head);
        if(head->data==0)
            head=head->next;
        return head;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends