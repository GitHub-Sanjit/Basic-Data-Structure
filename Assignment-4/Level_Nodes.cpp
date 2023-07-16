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
    while (!q.empty()){
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

vector<int> v;
void levelNode(Node *root,int level){
    queue<pair<Node*,int>> q;
    if (!root)
        return;
    q.push({root,0});
    while (!q.empty()){
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int lvl = pr.second;
        q.pop();

        if(lvl == level){
            v.push_back(node->val);
        }

        if (node->left)
            q.push({node->left,lvl + 1});
        if (node->right)
            q.push({node->right,lvl + 1});
    }
};

int main(){
    // Write your code here
    Node *root = input_tree();
    int level;
    cin >> level;
    levelNode(root, level);
    if(v.empty()){
        cout << "Invalid";
    }else{
        for(int x : v){
            cout << x << " ";
        }
    }
    return 0;
}