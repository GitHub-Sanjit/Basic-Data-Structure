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
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void get_mid(Node *head,int count){
    Node* mid=head;
    if(count%2!=0){
        for (int i = 0; i < (count / 2); i++)
        {
            mid = mid->next;
        }
        cout << mid->data << " ";
    }else{
        for (int i = 0; i < (count / 2)-1; i++)
        {
            mid = mid->next;
        }
        cout << mid->next->data << " ";
        cout << mid->data << " ";
    }
    
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
    int cnt = 0;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                swap(i->data, j->data);
                
            }
            
        }
        cnt++;
    }
    int count=size(head);
    get_mid(head, count);

    return 0;
}