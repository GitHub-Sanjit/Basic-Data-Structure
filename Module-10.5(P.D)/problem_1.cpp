#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node *&head,Node *&tail,int val){
    Node *newNode = new Node(val);
    if(tail==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void print_normal(Node *head){
    Node *temp = head;
    while (temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail){
    Node *temp = tail;
    while (temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
int main(){
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int data;
    while(true){
        cin >> data;
        if(data==-1)
            break;
        insert_tail(head1,tail1,data);
    }
    while(true){
        cin >> data;
        if(data==-1)
            break;
        insert_tail(head2,tail2,data);
    }
    int count1 = size(head1);
    int count2 = size(head2);
    // cout << count1 << " " << count2 << endl;
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool flag = true;
    if (count1 != count2)
    {
        cout << "NO";
    }
    else
    {
        for (; temp1 != NULL && temp2 != NULL;)
        {
            if (temp1->data != temp2->data)
            {
                flag = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if (flag == true)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    // print_normal(head1);
    // cout << endl;
    // print_normal(head2);
    // print_reverse(tail);
    return 0;
}