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
int main()
{
    // Write your code here
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int data;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        insert_at_tail(head1, tail1, data);
    }
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        insert_at_tail(head2, tail2, data);
    }
    int count1 = size(head1);
    int count2 = size(head2);
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool flag = true;
    if (count1 != count2){
        cout << "NO";
    }else{
        for (; temp1 != NULL && temp2 != NULL;)
        {
            if (temp1->data != temp2->data){
                flag = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(flag==true){
        cout << "YES";
        }else{
        cout << "NO";
        }
    }
    return 0;
}