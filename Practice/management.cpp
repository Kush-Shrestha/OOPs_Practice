#include<iostream>
using namespace std;
class Employee{
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
    int num;
    cout<<"Enter number of employees for the details: "<<endl;
    cin>>num;
    Employee emp[num];
    for(int i=0; i<num; i++){
        emp[i].setdetails();
    }
    for(int i=0; i<num; i++){
        emp[i].displaydetails();
    }
return 0;
}