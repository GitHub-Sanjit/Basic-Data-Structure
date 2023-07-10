#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    queue<string> sq;
    int q;
    cin >> q;
    while (q!=0) {
        int x;
        cin >> x;
        if(x == 0){
            string x;
            cin >> x;
            sq.push(x);
        }else{
            if(!sq.empty()){
                cout << sq.front()<<endl;
                sq.pop();
            }else{
                cout << "Invalid" << endl;
            }
        }
        q--;
    }

    return 0;
}