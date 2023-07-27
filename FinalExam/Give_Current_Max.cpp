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
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
            return a.roll > b.roll;
        else
            return a.marks < b.marks;
    }
};
int main()
{
    // Write your code here
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        // Student obj(name, roll, marks);
        pq.push(Student(name,roll,marks));
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            // Student obj(name, roll, marks);
            pq.push(Student(name, roll, marks));
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (c == 1)
        {
            if(!pq.empty()){
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }else{
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }else{
                    cout << "Empty" << endl;
                }
            }else{
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string Name;
    int marks;
    int roll;

    Student(string name, int roll, int marks){
        this->Name = name;
        this->marks = marks;
        this->roll = roll;
    }

};
// Make the custome compare
class cmp{
    public:
    bool operator()(Student a, Student b){
        if(a.marks == b.marks) return a.roll > b.roll;
        else return a.marks < b.marks;
    }
};


int main(){

    // make priority_queue
    priority_queue<Student,vector<Student>,cmp> pq;

    // Take input
    int n; cin >> n;
    while (n--)
    {
        string s; cin >> s;
        int roll,marks; cin >> roll >> marks;
        pq.push(Student(s, roll, marks));
    }

    int qus; cin >> qus;
    while (qus--)
    {
        int x; cin >> x;

        if(x == 0){
            string s; cin >> s;
            int roll,marks; cin >> roll >> marks;
            pq.push(Student(s, roll, marks));
            cout << pq.top().Name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
        }

        else if (x == 1) // print
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().Name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
            }
        }
        else if (x == 2)// delete
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
                    cout << pq.top().Name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
                }
            }

        }

    }
    return 0;
}
*/