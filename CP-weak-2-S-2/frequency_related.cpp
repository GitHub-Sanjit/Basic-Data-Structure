#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    // cout << mp.size() << endl;
    for (auto i : mp)
    {
        cout << i.first << endl;
        // if(i.second > 1){
        //     cout << "duplicate value ache";
        //     break;
        // }
    }
    return 0;
}
