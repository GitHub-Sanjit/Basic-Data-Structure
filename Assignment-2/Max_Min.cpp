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
void insert_at_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
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
    int data;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        insert_at_tail(head, tail, data);
    }
    for (Node *i = head; i->next != NULL;i=i->next){
        for (Node *j = i->next; j != NULL; j = j->next){
            if(i->data>j->data){
                swap(i->data,j->data);
            }
        }
    }
    cout << tail->data << " " << head->data;
    return 0;
}