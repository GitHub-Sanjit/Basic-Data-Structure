#include <bits/stdc++.h>
using namespace std;
int main(){
    // Write your code here
    int data;
    list<int> myList;
    while (true){
        cin >> data;
        if (data == -1)
            break;
        myList.push_back(data);
    }
    myList.sort();
    myList.unique();
    for(int data:myList){
        cout<<data<<" ";
    }
    return 0;
}