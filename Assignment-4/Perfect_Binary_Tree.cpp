#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree(){
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
        else{
            myLeft = new Node(l);
        }
        if (r == -1)
            myRight = NULL;
        else{
            myRight = new Node(r);
        }
        f->left = myLeft;
        f->right = myRight;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

int maxHeight(Node *root){
    if(root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

int count(Node *root){
    if(root == NULL)
        return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}

int main()
{
    // Write your code here
    Node *root = input_tree();
    int h = maxHeight(root);
    int allNodes = count(root);
    if (allNodes == pow(2, h) - 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}