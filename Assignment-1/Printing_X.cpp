#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for (int j =0; j<n;j++){
            if(i==j || i+j==n-1){
                if(i==(n/2)){
                    cout << "X";
                }else{
                    if(i==j){
                    cout << '\\';
                }else{
                    cout << '/';
                }
                }   
            }else{
                cout << " ";
            }    
        }
        cout << endl;
    }
    return 0;
}
