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
int sum = 0;
int left_sum(Node *root){
    queue<Node *> q;
    if (root == NULL)
        return 0;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        // cout << f->val << " ";
        if(f->left)
            sum += f->left->val;

        if (f->left)
            q.push(f->left); // left to right
        if (f->right)
            q.push(f->right);
    }
    return sum;
}

int main()
{
    Node *root = input_tree();
    // int c = max_height(root);
    // cout << c - 1;
    int s = left_sum(root);
    cout << s << endl;
    return 0;
}