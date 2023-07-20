#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

// 1. jodi duijon student er marks same hoy sekhetre apni roll jar smaller setar uport base kore sort korben
// 2. marks jar beshi tar upor base kore sort korben.

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll; // smaller value se sobar age thakbe
        }
        return a.marks < b.marks; // bigger value sobar age thakbe
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }
    // while (!pq.empty())
    // {
    //     // cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    //     pq.pop();
    // }
    int q;
    cin >> q;
    // 10^9
    while (q--)
    {
        char a;
        cin >> a;
        if (a == 'A')
        {
            cout << pq.top().name << endl; // o(1)
        }
        else
        {
            pq.pop();
        }
    }
    return 0;
}

// map<string, int>
// map<string, pair<int,int>>
// map -- automatic count  , lexicographical order automatic vabe
// priority_queue -- pair niye kaj korte, count korte hoy, lex

// 2
// this is my rahim karim fahim rahim rahim karim karim -->kahim
// my friends taj taj rokon rokon rokon --> rokon
