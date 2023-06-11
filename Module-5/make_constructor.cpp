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
    Node a(10);
    Node b(20);

    a.next = &b;

    cout<<a.data<<" "<<a.next->data<<endl;
    // cout<<b.data<<" "<<a.next->data<<endl;



    return 0;
}