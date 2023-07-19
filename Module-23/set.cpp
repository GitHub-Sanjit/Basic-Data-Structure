// Sorted and No duplicate
//search O(logN)
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;  //default ascending
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        s.insert(x); //O(logN)
    }
    for (auto it = s.begin(); it != s.end();it++){
        cout << *it << endl;
    }
        return 0;
}