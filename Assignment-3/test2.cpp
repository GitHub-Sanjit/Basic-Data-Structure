#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int t;
    cin >> t;
    // cout << t;
    while (t > 0)
    {
        stack<char> st1;
        // stack<char> st2;
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {

            // cout << s[i];
            if (st1.empty())
            {
                st1.push(s[i]);
                // cout << st1.top();
            }
            else
            {
                if ((st1.top() == 'R' && s[i] == 'B') || (st1.top() == 'B' && s[i] == 'R'))
                {
                    st1.pop();
                    if(!st1.empty() && st1.top() == 'P'){
                        st1.pop();
                    }else{
                        st1.push('P');
                    }
                    
                }
                else if ((st1.top() == 'R' && s[i] == 'G') || (st1.top() == 'G' && s[i] == 'R'))
                {
                    st1.pop();
                    if (!st1.empty() && st1.top() == 'Y')
                    {
                        st1.pop();
                    }else{
                        st1.push('Y');
                    }
                    
                }
                else if ((st1.top() == 'B' && s[i] == 'G') || (st1.top() == 'G' && s[i] == 'B'))
                {
                    st1.pop();
                    if (!st1.empty() && st1.top() == 'C')
                    {
                        st1.pop();
                    }else{
                        st1.push('C');
                    }
                    
                }
                else if (st1.top() == s[i])
                {
                    st1.pop();
                }
                else if (st1.top() != s[i])
                {
                    st1.push(s[i]);
                }
            }
        }
        queue<char> q;
        while(!st1.empty()){
            // cout << st1.top();
            q.push(st1.top());
            st1.pop();
        }
        while(!q.empty()){
            st1.push(q.front());
            q.pop();
        }

        if (!st1.empty())
        {
            while (!st1.empty())
            {
                cout << st1.top();
                st1.pop();
            }
        }
        else
        {
            cout << " ";
        }
        t--;
        cout << endl;
    }
    return 0;
}