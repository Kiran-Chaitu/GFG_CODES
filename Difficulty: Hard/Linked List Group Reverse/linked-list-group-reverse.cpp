//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/



class Solution {
  public:
    // Node* reverse(Node *head , Node *tail){
        
    // }
    Node *reverseKGroup(Node *head, int k) {
        // code here
        vector<int> v;
        Node *temp = head , *ans = head;
        while(head){
            v.push_back(head->data);
            head = head -> next;
        }
        long n = v.size();
        for(int i=0;i< n;i+=k){
            if( n - i < k){
                reverse(v.begin() + i , v.begin() + n);
            }
            else{
                reverse(v.begin() + i , v.begin() + i + k);
            }
        }
        int i=0;
        while(temp){
            temp -> data = v[i++];
            temp = temp->next;
        }
        return ans;
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

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

        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends