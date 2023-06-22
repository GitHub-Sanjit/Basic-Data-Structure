#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int data){
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
void reverse(Node *&head,Node *cur){
    if(cur->next==NULL){
        head = cur;
        return ;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main(){
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int data;
    while (true){
        cin >> data;
        if (data == -1)
            break;
        insert_at_tail(head, tail, data);
    }
    Node *tmp = head;
    while(tmp!=NULL){
        insert_at_tail(head2, tail2, tmp->data);
        tmp = tmp->next;
    }
    reverse(head2, head2);
    tmp = head;
    Node *tmp2 = head2;
    bool flag = true;
    while(tmp!=NULL){
        if(tmp->data!=tmp2->data){
            flag = false;
            break;
        }
        tmp=tmp->next;
        tmp2=tmp2->next;
    }
    if(flag==true){
        cout << "YES";
    }else{
        cout <<"NO";
    }
    return 0;
}