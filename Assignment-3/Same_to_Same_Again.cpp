#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
class myQueue{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int data){
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop(){
        sz--;
        Node *deleteNode = head;
        head = deleteNode->next;
        delete deleteNode;
        if (head == NULL){
            tail = NULL;
        }
    }
    int front(){
        return head->data;
    }
    int size(){
        return sz;
    }
    bool empty(){
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myStack{
public:
    vector<int> v;
    void push(int data){
        v.push_back(data);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }
};
int main(){
    // Write your code here
    myStack s;
    myQueue q;
    int n, m;
    cin >> n >> m;
    while(n!=0){
        int x;
        cin >> x;
        s.push(x);
        n--;
    }
    while(m!=0){
        int y;
        cin >> y;
        q.push(y);
        m--;
    }
    vector<int> v2;
    vector<int> v3;
    while(!s.empty()){
        v2.push_back(s.top());
        s.pop();
    }
    while(!q.empty()){
        v3.push_back(q.front());
        q.pop();
    }
    if(v2 == v3){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}

// https: // www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges