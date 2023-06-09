#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
    }
    if(cnt>0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

        return 0;
}
