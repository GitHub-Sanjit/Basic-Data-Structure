#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> s;
    while(n !=0){
        int x;
        cin >> x;
        s.push(x);
        --n;
    }

    int m;
    cin >> m;
    queue<int> q;
    while(m!=0){
        int y;
        cin >> y;
        q.push(y);
        --m;
    }

    int flag;
    if(s.size() != q.size()){
        flag = 0;
    }else{
        while (!s.empty()){
            if (s.top() != q.front()){
                flag = 0;
                break;
            }else{
                flag = 1;
            }
            s.pop();
            q.pop();
        }
    }

    if (flag == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}