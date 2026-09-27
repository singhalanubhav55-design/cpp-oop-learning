#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        int rollNumber;
        string name;
    public:

        void setDetails(string s , int roll){
            rollNumber = roll;
            name = s;
        }
        void displayDetails(){
            cout << "Name : " << name << endl;
            cout << "Roll Number : "<<rollNumber; 
        }
};
