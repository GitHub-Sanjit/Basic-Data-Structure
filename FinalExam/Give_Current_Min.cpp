#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int a;
        cin >> a;
        pq.push(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (c == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (c == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
        }
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Create the priority_queue
    priority_queue<int,vector<int>,greater<int>> pq; // for only min
    // Take input
    int indexs; cin >> indexs;
    while (indexs--)
    {
        int val ; cin >> val;
        pq.push(val);
    }


    // Take queruy
    int queris; cin >> queris;

    while (queris--)
    {
        // take input of the run function
        int n; cin >> n;

        if(n == 0){ // insert
            int x; cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (n == 1) // delete
        {
             if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (n == 2)
        {
             if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else{
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else{
                    cout << pq.top() << endl;
                }
            }

        }

    }



    return 0;
}
*/