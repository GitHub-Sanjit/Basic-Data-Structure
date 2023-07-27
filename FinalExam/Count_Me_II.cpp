#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> m;
        while(n--){
            int x;
            cin >> x;
            m[x]++;
        }
        int count = INT_MIN;
        int value = INT_MIN;
        for (auto i : m)
        {
            if(i.second>count){
                count = i.second;
            }
            if(i.first>value && i.second == count){
                value = i.first;
            }
        }
        cout << value << " " << count<<endl;
    }
    

    return 0;
}
