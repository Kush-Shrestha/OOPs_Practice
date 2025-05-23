#include<iostream>
using namespace std;
class Employee {
    private:
    int id; 
    string name;
    float salary;
    public:
    void setdetails(){
        cout <<"Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee salary: ";
        cin >> salary;
    }
    void displaydetails(){
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " <<salary<< endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of employees: "<<endl;
    cin>>n;

    for (int i=0; i<n; i++){
        Employee emp;
        emp.setdetails();
        emp.displaydetails();
    }
return 0;
}