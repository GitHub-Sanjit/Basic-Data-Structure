#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        string data;
        Node* next;
        Node* prev;
    Node(string d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, string data){
    Node *newNode = new Node(data);
    if (tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void print_normal(Node *head){
    Node *tmp = head;
    while (tmp != NULL){
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main(){
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    Node *prev = NULL;
    Node *tmp = head;
    Node *tmp2 = head;
    string data;
    while (true){
        cin >> data;
        if (data == "end")
            break;
        insert_tail(head,tail,data);
    }
    int q;
    cin>>q;
    int count = 0;
    tmp = head;
    for (int i = 0; i < q;i++){
            count++;
            string data2;
            cin >> data2;
            if (data2 == "visit"){
                string str;
                cin >> str;
                tmp2 = head;
                bool flag = false;
                while (tmp2 != NULL){
                    if (tmp2->data == str){
                        flag = true;
                        break;
                    }
                    tmp2 = tmp2->next;  
                }
                if (flag == true){
                    cout << tmp2->data << endl;
                    tmp = tmp2;
                }
                else{
                    cout << "Not Available" << endl;
                }
            }
            else if (data2 == "prev")
            {
                if (tmp->prev == NULL){
                    cout << "Not Available" << endl;
                }
                else{
                    tmp = tmp->prev;
                    cout << tmp->data << endl;
                }
            }
            else if (data2 == "next") {
                if (tmp->next == NULL){
                    cout << "Not Available" << endl;
                }
                else{
                    tmp = tmp->next;
                    cout << tmp->data << endl;
                }
            }
        }
    return 0;
}