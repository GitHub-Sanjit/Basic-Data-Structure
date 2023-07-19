#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    mp.insert({"Sanjit", 100});
    mp.insert({"Tamim", 100});
    mp.insert({"Mushfiq", 100});
    mp["Sakib"] = 8; // O(logN)

    //itarator use
    // for (auto it = mp.begin(); it != mp.end();it++){  // O(logN)
    //     cout << it->first << endl; // NO Order
    // }

    cout << mp["Sakib"] << endl; // output 0 when key absent
    if(mp.count("Sanjitt")){
        cout << "ACE" << endl;
    }else
        cout << "Nai" << endl;
    return 0;
}