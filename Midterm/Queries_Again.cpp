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
void insert_head(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if (head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if (tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void insert_at_position(Node *head, int pos, int val){
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;    
    tmp->next = newNode;           
    newNode->next->prev = newNode; 
    newNode->prev = tmp;           
}
void print_normal(Node *head){
    Node *tmp = head;
    while (tmp != NULL){
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail){
    Node *tmp = tail;
    while (tmp != NULL){
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head){
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    Node *prev = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q;i++){
        int x, v;
        cin >> x >> v;
        if(x > size(head)){
            cout << "Invalid"<<endl;
        }else if(x == 0){
            insert_head(head, tail, v);
            if (head != NULL){
                cout << "L -> ";
                print_normal(head);
                cout << "R -> ";
                print_reverse(tail);
            }
        }else if(x == size(head)){
            insert_tail(head, tail, v);
            if (head != NULL){
                cout << "L -> ";
                print_normal(head);
                cout << "R -> ";
                print_reverse(tail);
            }
        }else{
            insert_at_position(head, x, v);
            if (head != NULL){
                cout << "L -> ";
                print_normal(head);
                cout << "R -> ";
                print_reverse(tail);
            }
        }
    }
    return 0;
}