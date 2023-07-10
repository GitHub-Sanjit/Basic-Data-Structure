#include <bits/stdc++.h>
using namespace std;

int main(){
    // Write your code here
    int t;
    cin >> t;
    while (t != 0){
        stack<char> st1;
        stack<char> st2;
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++){
            if (st1.empty()){
                st1.push(s[i]);
            }else{
                if ((st1.top() == 'R' && s[i] == 'B') || (st1.top() == 'B' && s[i] == 'R')){
                    st2.push('P');
                    st1.pop();
                }else if ((st1.top() == 'R' && s[i] == 'G') || (st1.top() == 'G' && s[i] == 'R')){
                    st2.push('Y');
                    st1.pop();
                }else if ((st1.top() == 'B' && s[i] == 'G') || (st1.top() == 'G' && s[i] == 'B')){
                    st2.push('C');
                    st1.pop();
                }else if (st1.top() == s[i]){
                    st1.pop();
                }else if(st1.top() != s[i]){
                    st1.push(s[i]);
                }
            }
        }
        while (!st1.empty() && !st2.empty()){
            if (st1.top() != st2.top()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        queue<char> q;
        while (!st2.empty()){
            char k = st2.top();
            if (q.empty()){
                q.push(k);
                st2.pop();
            }else{
                if (k != q.front()){
                    q.push(k);
                    st2.pop();
                }else{
                    q.pop();
                    st2.pop();
                }
            }
        }
        while (!q.empty()){
            char k = q.front();
            if (st2.empty()){
                st2.push(k);
                q.pop();
            }else{
                if (k != st2.top()){
                    st2.push(k);
                    q.pop();
                }else{
                    st2.pop();
                    q.pop();
                }
            }
        }

        if (!st2.empty()){
            while (!st2.empty()){
                cout << st2.top();
                st2.pop();
            }
        }
        else{
            cout << " ";
        }
        t--;
        cout << endl;
    }
    return 0;
}