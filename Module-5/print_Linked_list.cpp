#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node* node = new Node(5);
    cout << node->data << endl;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout << head->data << endl;
    // cout << head->next->data << endl;
    // cout << head->next->next->data << endl;
    // cout << head->next->next->next->data << endl;
    Node *temp = head;
    while(temp !=NULL){
        // cout << temp->data << endl;
        temp = temp->next;
    }
    temp = head;
    while(temp !=NULL){
        // cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}