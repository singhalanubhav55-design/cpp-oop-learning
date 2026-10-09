#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
        string name;
        int id;
    public:
        Employee(string name,int id){
            this->name = name;
            this->id = id;
        }
        void displayDetails(){
            cout << "Name : " << name << endl;
            cout << "Id : " << id << endl;
        }

};

class Manager : public Employee{
    private: int teamSize;
    public :
    Manager(string name,int id,int teamSize) : Employee(name,id){
        this->teamSize = teamSize;
    }
    void displayDetails(){
        Employee :: displayDetails();
        cout << "Team Size : " << teamSize << endl;
    }
};
class Engineer : public Employee{
    private: string specialization;
    public:
    Engineer(string name,int id,string specialization) : Employee(name,id){
        this-> specialization = specialization;
    }
    void displayDetails(){
        Employee :: displayDetails();
        cout << "Specialization : " << specialization << endl ;
            }
};
