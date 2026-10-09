#include <bits/stdc++.h>
using namespace std;


class Employee{
    private:
        double salary;
    protected:
     int employeeId;
    public:
        string name;

    void setSalary(double salary){
        if(salary>=0){
            this->salary = salary;
        }
        else{
            this->salary=0;
            cout << "Invalid salary" << endl;
        }
    }
    double getSalary() const{
      
        return salary;
    }
    Employee(string name, int employeeId, double salary){
        this->name = name;
        this->employeeId = employeeId; 
        if(salary >=0) this->salary=salary;
        else{
            cout << "Invalid salary" << endl;
            this->salary = 0;
        }
         }

    void displayEmployeeDetails(){
        cout << fixed << setprecision(2);
        cout << "Name : " << name << endl ;
        cout << "Employee Id : " << employeeId << endl;
        cout << "Salary : " << salary << endl;
    }

};
