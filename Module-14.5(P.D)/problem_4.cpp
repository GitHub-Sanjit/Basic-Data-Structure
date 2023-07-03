#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;
    stack<int> s;
    while(n!=0){
        int x;
        cin >> x;
        q.push(x);
        --n;
    }
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}