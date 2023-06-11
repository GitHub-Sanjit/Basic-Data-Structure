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
    // Node head(10);
    Node *head= new Node(10);
    Node *a= new Node(20);

    head->next = a;
    cout<<head->data<<endl;
    cout<<a->data<<endl;
    cout<<head->next->data<<endl;
    return 0;
}