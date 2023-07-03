#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >>n;
    stack<int> st1;
    while(n!=0){
        int x;
        cin >> x;
        st1.push(x);
        --n;
    }

    cin >> m;
    stack<int> st2;
    while(m!=0){
        int y;
        cin>>y;
        st2.push(y);
        --m;
    }
    int flag;
    if(st1.size() == st2.size()){
        while(!st1.empty()){
            if(st1.top() != st2.top()){
                flag = 0;
                break;
            }else{
                flag = 1;
            }
            st1.pop();
            st2.pop();
        }
    }else{
        flag = 0;
    }
    if(flag == 1){
        cout<<"YES";
    }else{
        cout <<"NO" ;
    }
    return 0;
}