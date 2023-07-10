#include <bits/stdc++.h>
using namespace std;

int main(){
    // Write your code here
    stack<int> s;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    while (n != 0){
        int x;
        cin >> x;
        s.push(x);
        n--;
    }
    while (m != 0){
        int y;
        cin >> y;
        q.push(y);
        m--;
    }
    bool flag = true;
    if(s.size() != q.size()){
        flag = false;
    }else{
        while(!s.empty()){
            if(s.top() == q.front()){
                s.pop();
                q.pop();
            }else{
                flag = false;
                break;
            }
        }
    }
    if(flag) {
        cout<<"YES";
    } else {
        cout<< "NO";
    }
    return 0;
}