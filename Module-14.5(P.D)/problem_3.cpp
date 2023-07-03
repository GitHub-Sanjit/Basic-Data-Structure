#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> s;
    stack<int> s2;
    while(n!=0){
        int x;
        cin >> x;
        s.push(x);
        --n;
    }
    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }
    // cout<<s2.
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    
    return 0;
}