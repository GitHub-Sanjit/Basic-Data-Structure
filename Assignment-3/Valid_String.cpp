#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int t;
    cin >> t;
    while(t != 0){
        stack<char> c;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++){
            if(c.empty()){
                c.push(s[i]);
            }
            else if (!c.empty() && c.top() == s[i]){
                c.push(s[i]);
            }
            else if (!c.empty() && c.top() != s[i]){
                c.pop();
            }
        }
        if(c.empty()){
            cout << "YES"<<endl;
        }else{
            cout<< "NO" << endl ;
        }
        t--;
    }

    return 0;
}