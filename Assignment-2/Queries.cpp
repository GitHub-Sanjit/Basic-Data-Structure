#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head,Node *&tail, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    if(head->next==NULL){
        tail = head;
    }
}
void insert_at_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q;i++){
        int x, data;
        cin >> x >> data;
        if(x==0){
            insert_at_head(head,tail, data);
            cout << head->data << " " << tail->data << endl;
        }else{
            insert_at_tail(head,tail, data);
            cout << head->data << " " << tail->data<<endl;
        }
    }
    return 0;
}
