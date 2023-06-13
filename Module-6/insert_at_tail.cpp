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

void insert_at_tail(Node *&head,int v){
    Node *newNode = new Node(v);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_linked_list(Node *head){
    cout << "Your Linked List: ";
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main(){
    Node *head = NULL;
    while(true){
        cout << "OPTION 1: Insert at Tail"<<endl;
        cout << "OPTION 2: Print Linked List"<<endl;
        cout << "OPTION 3: Terminate"<<endl;
        int option;
        cin >> option;
        if(option==1){
            cout << "Please enter value" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }else if(option==2){
            print_linked_list(head);
        }else if(option==3){
            break;
        }
        // print_linked_list(head);
    }
    return 0;
}