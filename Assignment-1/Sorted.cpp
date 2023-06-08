#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int t;
    cin >> t;
    for (int i = 0; i < t;i++){
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n;j++){
            cin >> a[j];
        }
        int cnt = 0;
        for (int j = 0; j < n;j++){
            for (int k = j + 1; k < n;k++){
                if(a[j]>a[k]){
                    cnt++;
                }
            }
        }
        if(cnt>0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

        return 0;
}
