#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> m;
        while(ss>>word){
            m[word]++;
        }

        int countMx = INT_MIN;
        for(auto i : m){
            if(i.second > countMx){
                countMx = i.second;
            }
        }

        string firstWord;
        stringstream ss2(s);
        map<string, int> m2;
        while(ss2>>word){
            m2[word]++;
            if(m2[word] == countMx){
                firstWord = word;
                break;
            }
        }
        cout << firstWord << " " << countMx << endl;
    }

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Create map for count
    int qurey; cin >> qurey;
    cin.ignore();
    while (qurey--)
    {
        map<string,int>mp;
        map<string,int>mp2;
        string sentence; getline(cin, sentence);

        // Saparate words and count
        stringstream ss(sentence);
        string words;
        while (ss >> words)
        {
            mp[words]++;
        }

        // find the maixmum of the word
        int countMax = 0;
        for(auto && s : mp){
            if(s.second > countMax){
                countMax = s.second;
            }
        }

        // if equal than frist coutmax will print
        string lexci;
        stringstream ss2(sentence);
        while (ss2 >> words)
        {
            mp2[words]++;
            if(mp2[words] == countMax){
                lexci = words;
                break;
            }
        }

    cout << lexci <<" "<< countMax<< endl;
    }
    return 0;
}
*/