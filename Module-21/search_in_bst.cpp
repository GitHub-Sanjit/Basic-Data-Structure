#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
            myRight = NULL;
        else
        {
            myRight = new Node(r);
        }
        f->left = myLeft;
        f->right = myRight;

        // 3.
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
void levelOrder(Node *root)
{
    queue<Node *> q;
    if (!root)
        return;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left); // left to right
        if (f->right)
            q.push(f->right);
    }
};
bool search(Node *root, int x){
    if(root == NULL)
        return false;
    if(root->val == x)
        return true;
    if(x < root->val)
        return search(root->left, x);
    else
        return search(root->right, x);
    
}
int main()
{
    Node *root = input_tree();
    // levelOrder(root);
    if(search(root,100))
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}