#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    long long pref[n];
    pref[0] = a[0];
    for (int i = 1; i < n;i++){
        pref[i]=a[i]+pref[i-1];
    }
    for (int i = n-1; i >= 0;i--){
        cout << pref[i]<<" ";
    }

    return 0;
}
