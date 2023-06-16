#include <bits/stdc++.h>
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
void insert_at_tail(Node *&head,Node *&tail,int data){
    Node *newNode = new Node(data);
    if(head==NULL){
        head= newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head){
    Node *tmp = head;
    while(tmp!=NULL){
        cout<< tmp -> data <<" ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse_linked_list(Node *x){
    if(x==NULL){
        return;
    }
    print_reverse_linked_list(x->next);
    cout << x->data << " ";
}
int main()
{
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    int data;
    while (true)
    {
        cin >> data;
        if(data==-1)
            break;
        insert_at_tail(head, tail, data);
    }
    print_reverse_linked_list(head);
    cout << endl;
    print_linked_list(head);
    return 0;
}
