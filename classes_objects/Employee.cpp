#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
        int salary;
    public:
        string employeename;

        void setsalary(int val){
            salary = val;
        }
        void setname(string s){
            employeename =s;
        }
        int getsalary(){
            return salary;
        }
};

int main(){
    Employee obj1; // stack allocation . It automatically get deleted
    obj1.setsalary(10000);
    obj1.setname("Anubhav");

    cout << obj1.employeename << " salary is " << obj1.getsalary();

    Employee* obj2 = new Employee(); // Heap Allocation
    delete obj2; //Heap memory in c++ required manual deletion.
}