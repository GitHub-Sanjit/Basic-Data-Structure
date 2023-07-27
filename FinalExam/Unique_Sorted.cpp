#include <bits/stdc++.h>
using namespace std;
int main(){
    // Write your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        stack<int> st;
        while(n--){
            int x;
            cin >> x;
            s.insert(x);
        }
        for (auto it = s.begin(); it != s.end(); it++)
        {
            st.push(*it);
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
