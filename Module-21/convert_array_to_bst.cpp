#include<bits/stdc++.h>
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
Node *convert(int a[],int n, int l, int r){
    if(l>r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convert(a, n, l, mid - 1);
    Node *rightRoot = convert(a, n, mid + 1,r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
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
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    Node *root = convert(a, n, 0, n - 1);
    levelOrder(root);
    return 0;
}